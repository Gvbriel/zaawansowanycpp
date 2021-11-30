//
// Created by gabri on 29.11.2021.
//

#include "Dictionary.h"

#include <utility>


template<typename T>
void showV(T el){
    cout << el << endl;
}

Dictionary::Dictionary() {}

void Dictionary::addWord(string word, string translation){
    if(words.find(word) == words.end()){
        words.insert(make_pair(word, translation));
    }
}

void Dictionary::deleteWord(string word) {
    if(words.find(word) != words.end()){
        words.erase(word);
    }
}

void Dictionary::showTranslation(string word) {
    if(words.find(word) != words.end()){
        cout << words.find(word)->second << endl;
    }
}

void Dictionary::showDictionary() {
    for(auto it = words.begin(); it != words.end(); it++){
        cout << it->first << ", tlumaczenie: " << it->second << "\n";
    }
}

void Dictionary::sortDictionary(){
    vector<string> wordsVec;
    map<string,string> temp;

    for(map<string,string>::iterator it = words.begin(); it != words.end(); it++){
        wordsVec.push_back(it->second);
    }
    sort(wordsVec.begin(), wordsVec.end());
    for_each(wordsVec.begin(), wordsVec.end(), showV<string>);

    cout << "\nTrwa sortowanie\n" << endl;
    pair<string,string> word;
    string wordTemp;
    for(auto it = wordsVec.begin(); it != wordsVec.end(); it++){
        cout << *&words.find(*it)->second << endl;
        if(words.find(*it) != words.end()){
            word = *words.find(*it);

            temp.insert(word);
            words.erase(*it);
        }
    }

    words = temp;

    for(auto it = temp.begin(); it != temp.end(); it++){
        cout << it->second << endl;
    }
}
