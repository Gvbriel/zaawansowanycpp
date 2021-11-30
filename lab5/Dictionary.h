//
// Created by gabri on 29.11.2021.
//

#ifndef LAB5_DICTIONARY_H
#define LAB5_DICTIONARY_H

#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class Dictionary {
private:
    map<string, string> words;
public:
    Dictionary();

    void addWord(string word, string translation);
    void showDictionary();
    void deleteWord(string word);
    void showTranslation(string word);
    void sortDictionary();
};


#endif //LAB5_DICTIONARY_H
