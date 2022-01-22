#include <iostream>

using namespace std;

void inkrementuj(int &oczko, int wartosc){
    oczko += wartosc;
    if(oczko > 21){
        throw string("Wartosc wieksza niz 21");
    }
    else if(oczko == 21){
        cout << "Koniec\n";
    }
}

int main() {
    int oczko = 0, wartosc;
    while(oczko != 21 && oczko < 21){
        try{
            cout << "Podaj wartosc\n";
            cin >> wartosc;
            if(!isdigit(wartosc)){
                throw std::invalid_argument("Invalid entry");
            }
            inkrementuj(oczko, wartosc);
        }
        catch(int w1){
            cout << w1 << endl;
            break;
        }
        catch(string w2){
            cout << w2 << endl;
            break;
        }
        catch(invalid_argument a1){
            cout << a1.what() << endl;
            break;
        }
    }

    return 0;
}
