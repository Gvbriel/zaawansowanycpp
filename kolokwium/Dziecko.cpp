//
// Created by Gabriel Polak on 06/12/2021.
//

#include "Dziecko.h"

Dziecko::Dziecko(const string &imie, bool czyGrzeczne, int wiek, const string &adres) : imie(imie),
                                                                                        czyGrzeczne(czyGrzeczne),
                                                                                        wiek(wiek), adres(adres) {}

bool Dziecko::CzyGrzeczne() const {
    return czyGrzeczne;
}

const string &Dziecko::getImie() const {
    return imie;
}

const string &Dziecko::getAdres() const {
    return adres;
}

int Dziecko::getWiek() const {
    return wiek;
}
