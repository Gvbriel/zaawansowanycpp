#include <iostream>
#include <utility>
#include <vector>
#include "Headers/Citizen.h"
#include "Headers/City.h"

using namespace std;

template <typename T>
void show(T &con)
{
    for(typename T::iterator it=con.begin( ); it!=con.end( ); it++)
        cout<<*it<<" ";
    cout<<endl;
}

void showCities(vector<City> cities){
    for_each(cities.begin(), cities.end(), [](City city){
        city.showCity();
        city.postalCodes();
        cout << city.getPostalCodesNumber() << endl;
        cout << "-----------\n";
    });
}

void postCodes(vector<City> cities){
    int max = 0;
    string name;
    for_each(cities.begin(), cities.end(), [&max, &name](City city){
        if(city.getPostalCodesNumber() > max){
            max = city.getPostalCodesNumber();
            name = city.getCityName();
        }
    });
    cout << name << " posiada najwiecej kod pocztowych, " << max << endl;
}

void maxCitizens(vector<City> cities){
    int max = 0;
    string name;
    for_each(cities.begin(), cities.end(), [&max, &name](City city){
        if(city.city_citizens() > max){
            max = city.city_citizens();
            name = city.getCityName();
        }
    });
    cout << name << " posiada najwiecej mieszkancow, " << max << endl;
}

void the_most(vector<City> cities, int mode){
    switch (mode){
        case 1:
            postCodes(std::move(cities));
            break;
        case 2:
            maxCitizens(cities);
            break;
        default:
            break;
    }
}

void statistics(vector<City> cities){
    for_each(cities.begin(), cities.end(), [](City city){
        cout << city.getCityName() << endl;

        cout << "Mieszkancow: " << city.city_citizens() << " z czego kobiet: " << city.woman() << ", mezczyzn: " << city.city_citizens() - city.woman() << endl;
        cout << "Pelnoletnich: " << city.adults() << ". Niepelnoletnich: " << city.city_citizens() - city.adults() << endl;
        cout << "-----------------------\n";
    });
}

void sort_cities(vector<City> &cities){
    sort(cities.begin(), cities.end(), [](City city1, City city2){
        return city1.city_citizens() < city2.city_citizens();
    });
}

int main()
{
    vector<Citizen> citizens;
    vector<Citizen> citizens1;
    vector<City> cities;
    citizens.push_back(Citizen("Stachu", "Jones", "21-400", 21, 'M'));
    citizens.push_back(Citizen("Andrzej", "Jones", "22-400", 22, 'M'));
    citizens.push_back(Citizen("Daniel", "Jones", "26-400", 22, 'F'));
    citizens.push_back(Citizen("Jakub", "Jones", "22-400", 22, 'M'));

    citizens1.push_back(Citizen("Stachu", "Jones", "21-400", 21, 'M'));
    citizens1.push_back(Citizen("Andrzej", "Jones", "23-400", 22, 'F'));
    citizens1.push_back(Citizen("Daniel", "Jones", "26-400", 10, 'F'));
    citizens1.push_back(Citizen("Jakub", "Jones", "22-400", 22, 'M'));
    citizens1.push_back(Citizen("Jakub", "Jones", "28-400", 22, 'M'));

    City Lublin("Lublin");
    City Zamosc("Zamosc");
    Zamosc.setCitizens(citizens1);
    Lublin.setCitizens(citizens);

    cities.push_back(Zamosc);
    cities.push_back(Lublin);

    statistics(cities);
    sort_cities(cities);
    cout << "\nPosortowane\n";
    statistics(cities);

    return 0;
}