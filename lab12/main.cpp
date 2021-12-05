#include <iostream>
#include <vector>
#include <tuple>
#include <unordered_map>
#include <numeric>
#include <string>
#include <algorithm>
#include "Car.h"

using namespace std;

tuple<int, float, string> textData(vector<string> napisy){
    int dlugoscNajkrotszego = napisy.at(0).length();

    auto najkrotszy = [&dlugoscNajkrotszego](string napis){
        if(napis.length() < dlugoscNajkrotszego){
            dlugoscNajkrotszego = napis.length();
        }
    };
    for_each(napisy.begin(), napisy.end(), najkrotszy);

    float sredniaNapisow, suma = 0;
    auto sumaF =  [&suma](string napis){
        suma += napis.length();
    };
    for_each(napisy.begin(), napisy.end(), sumaF);
    sredniaNapisow = suma / (float)napisy.size();

    string najd = napisy.at(0);
    auto najdluzszy = [&najd](string napis){
        if(najd.length() < napis.length()){
            najd = napis;
        }
    };
    for_each(napisy.begin(), napisy.end(), najdluzszy);

    return make_tuple(dlugoscNajkrotszego, sredniaNapisow, najd);
};

template<typename T,typename T2>
void lessThan(T &arr,T2 arg){
    int counter = count_if(arr.begin(),arr.end(),[&arg](int el) -> bool {!(el < arg) ? el : arg;});
    cout << "Liczb mniejszych od " << arg << " jest: " << counter << endl;
}

int main(){
    vector<string> napisy;
    napisy.push_back("su223s");
    napisy.push_back("su4s");
    napisy.push_back("su123s");
    napisy.push_back("su1231s");
    napisy.push_back("sus");

    auto zad = textData(napisy);
    cout << "Dlugosc najkrotszego to " << get<0>(zad) << endl;
    cout << "Srednia napisow to " << get<1>(zad) << endl;
    cout << "Najdluzszy wyraz to " << get<2>(zad) << endl;
}

//12.2
//int main(){
//    vector<Car> cars;
//    vector<pair<int, Car>> carsSorted;
//
//    cars.push_back(Car("Ferrari", 1998, 4.5));
//    cars.push_back(Car("Bentley", 2021, 4.0));
//    cars.push_back(Car("Mercedes-Benz", 2018, 6.3));
//    cars.push_back(Car("Honda", 2004, 1.6));
//    cars.push_back(Car("BMW", 2016, 3.5));
//
//    int counter = 1;
//    for(auto car : cars){
//        carsSorted.push_back(make_pair(counter, car));
//        counter++;
//    };
//
//    auto showCars = [](pair<int, Car> car){
//        cout << car.first << " ";
//        car.second.showCar();
//    };
//
//    cout << "\n----Rok produkcji----\n";
//    auto rokProdukcji = [](pair<int, Car> car, pair<int, Car> car1){
//        return car.second.getRokProdukcji() < car1.second.getRokProdukcji();
//    };
//    sort(carsSorted.begin(), carsSorted.end(), rokProdukcji);
//    for_each(carsSorted.begin(), carsSorted.end(), showCars);
//
//    cout << "\n----Pojemnosc silnika----\n";
//    auto pojemnoscSilnika = [](pair<int, Car> car, pair<int, Car> car1){
//        return car.second.getPojemnoscSilnika() > car1.second.getPojemnoscSilnika();
//    };
//    sort(carsSorted.begin(), carsSorted.end(), pojemnoscSilnika);
//    for_each(carsSorted.begin(), carsSorted.end(), showCars);
//
//}

//12.1
//int main() {
//    vector<int> vec, parzysteVec, nieparzysteVec;
//    int parzLicz = 0;
//
//    vec.push_back(-1);
//    vec.push_back(-7);
//    for(int i = 0; i < 10; i++){
//        vec.push_back(i);
//    }
//    vec.push_back(-3);
//    vec.push_back(-4);
//
//    auto print = [](const int& n) { cout << n << "|"; };
//
//    auto parzyste = [&parzLicz](int n) { if(n % 2 ==0) parzLicz++;};
//    for_each(vec.begin(), vec.end(), print);
//    for_each(vec.begin(), vec.end(), parzyste);
//    cout << "\nIlosc licz patrzystych wynosi " << parzLicz << endl;
//
//    cout <<  "Srednia wynosi " << accumulate(vec.begin(), vec.end(), 0.0/vec.size()) << endl;
//
//    cout << "\n------Usuniete ujemne-----------\n";
//    auto it = remove_if(vec.begin(), vec.end(),[](int n){ return n < 0;});
//    vec.erase(it, vec.end());
////    for_each(vec.begin(), vec.end(), deleteX);
//    for_each(vec.begin(), vec.end(), print);
//
//    cout  << "\n--------Posortowane--------\n";
//    auto sortuj = [&parzysteVec, &nieparzysteVec](int n){
//        if(n % 2 == 0){
//            parzysteVec.push_back(n);
//        }else{
//            nieparzysteVec.push_back(n);
//        }
//    };
//    for_each(vec.begin(), vec.end(), sortuj);
//    vec.clear();
//    vec = parzysteVec;
//    vec.insert(vec.begin(), nieparzysteVec.begin(), nieparzysteVec.end());
//    for_each(vec.begin(), vec.end(), print);
//
//    cout << "\n-----Przeciwna----------\n";
//    auto przeciwna = [](int it){
//        return -it;
//    };
//    transform(vec.begin(), vec.end(), vec.begin(), przeciwna);
//    for_each(vec.begin(), vec.end(), print);
//
//    cout << "\n----Mniejsze niz algorytm------\n";
//    int mniejsza = 6, ilosc = 0;
//    auto mniejsze =  [mniejsza, &ilosc](int n){
//        if(mniejsza > n){
//            ilosc++;
//        }
//    };
//    for_each(vec.begin(), vec.end(), mniejsze);
//    cout << ilosc;
//
////    int sum = 0;
////    vector<string> teksty;
////    teksty.push_back("sus");
////    teksty.push_back("su223s");
////    teksty.push_back("su4s");
////    teksty.push_back("su123s");
////    teksty.push_back("su1231s");
////    sort(teksty.begin(), teksty.end());
////    cout << teksty[teksty.size()-1].length();
////    for_each(teksty.begin(), teksty.end(), [&sum](string n){sum += n.length();});
////    float avg = sum / teksty.size();
////    cout << avg;
//
//    return 0;
//}
