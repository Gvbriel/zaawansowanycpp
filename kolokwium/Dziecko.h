//
// Created by Gabriel Polak on 06/12/2021.
//

#ifndef KOLOKWIUM_DZIECKO_H
#define KOLOKWIUM_DZIECKO_H
#include <iostream>
using namespace std;

class Dziecko {
private:
    string imie;
    bool czyGrzeczne;
    int wiek;
    string adres;
public:
    Dziecko(const string &imie, bool czyGrzeczne, int wiek, const string &adres);
    bool CzyGrzeczne() const;

    const string &getAdres() const;

    int getWiek() const;

    const string &getImie() const;
};


#endif //KOLOKWIUM_DZIECKO_H
