#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include "Dziecko.h"
#include "Prezent.h"

using namespace std;

void dzieciPrezenty(vector<Dziecko> &dzieciGrzeczne, vector<Prezent> &prezenty){
    map<string, string> dzieciPrezent;
    vector<Dziecko> bezPrezentu;
    sort(dzieciGrzeczne.begin(), dzieciGrzeczne.end(), [](Dziecko d1, Dziecko d2){
        return d1.getWiek() < d2.getWiek();
    });
    cout << "Rozmieszczenie prezentow:" << endl;
    for(auto dziecko: dzieciGrzeczne){
        if(!prezenty.empty()){
            auto prezent = find_if(prezenty.begin(), prezenty.end(), [dziecko](Prezent prezent){
                return prezent.czyMozeOtrzymac(dziecko);
            });
            if(prezent != prezenty.end()){
                dzieciPrezent.insert(make_pair(dziecko.getImie(), prezent->getId()));
                remove_if(prezenty.begin(), prezenty.end(), [prezent](Prezent p){
                    return prezent->getId() == p.getId();
                });
            }else{
                bezPrezentu.push_back(dziecko);
            }
        }
    }
    for(auto dziecko: dzieciPrezent){
        cout << dziecko.first << " dostanie prezent " << dziecko.second << endl;
    }

    if(!bezPrezentu.empty()){
        for(auto dziecko:bezPrezentu){
            cout << dziecko.getImie() << " nie dostanie prezentu\n";
        }
    }
}

void adresy(vector<Dziecko> dzieci){
    map<string, int> adresy;
    for(auto dziecko:dzieci){
        if(adresy.find(dziecko.getAdres()) != adresy.end()){
            adresy.find(dziecko.getAdres())->second += 1;
        }else{
            adresy.insert(make_pair(dziecko.getAdres(), 1));
        }
    }
    for(auto adres: adresy){
        cout << adres.first << " posiada " << adres.second << " dzieci." << endl;
    }

}

int main() {
    vector<Dziecko> dzieci, dzieciGrzeczne, dzieciNiegrzeczne;
    vector<Prezent> prezenty;

    dzieci.emplace_back("Stasio", true, 0, "Ametystowa 11");
    dzieci.emplace_back("Jasio", false, 4, "Diamentowa 11");
    dzieci.emplace_back("Danielek", true, 10, "Bursztynowa 11");
    dzieci.emplace_back("Serdelek", true, 2, "Diamentowa 11");
    dzieci.emplace_back("Kubus", true, 9, "Ametystowa 11");
    dzieci.emplace_back("Bartus", true, 4, "Bursztynowa 11");
    dzieci.emplace_back("Andrzej", true, 6, "Bursztynowa 11");

    for_each(dzieci.begin(), dzieci.end(), [&dzieciGrzeczne, &dzieciNiegrzeczne](const Dziecko& dziecko){
        if(dziecko.CzyGrzeczne()){
            dzieciGrzeczne.push_back(dziecko);
        }else{
            dzieciNiegrzeczne.push_back(dziecko);
        }
    });

    dzieci = dzieciGrzeczne;
    for_each(dzieciNiegrzeczne.begin(), dzieciNiegrzeczne.end(), [&dzieci](Dziecko dziecko){
        dzieci.push_back(dziecko);
    });

    cout << "0 - niegrzeczny, 1 - grzeczny" << endl;
    for_each(dzieci.begin(), dzieci.end(), [](Dziecko dziecko){
        cout << dziecko.getImie() << " jest " << dziecko.CzyGrzeczne() << endl;
    });

    adresy(dzieciGrzeczne);
    cout << "\n-----Prezenty------\n";
    prezenty.emplace_back("PZ035", 3,5);
    prezenty.emplace_back("PZ079", 7,9);
    prezenty.emplace_back("PZ0799", 0,10);
    prezenty.emplace_back("PZ003", 0,3);
    prezenty.emplace_back("PZ009", 0,9);
    cout << endl;
    for(auto prezent: prezenty){
        cout << prezent.getId() << endl;
    }
    dzieciPrezenty(dzieciGrzeczne, prezenty);
    return 0;
}
