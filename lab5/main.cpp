#include <iostream>
#include <utility>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include "Dictionary.h"

using namespace std;

int main(){
    Dictionary Polski;
    Polski.addWord("bbb", "b2");
    Polski.addWord("ccc", "c3");
    Polski.addWord("aaa", "a1");
    Polski.showDictionary();
    Polski.sortDictionary();

    return 0;
}

//5.2
//template<typename T>
//void showDiff(set<T> one, set<T> two, int mode){
//    set<T> diffOne, diffTwo;
//
//    set_difference(one.begin(), one.end(), two.begin(), two.end(), insert_iterator<set<T>>(diffOne, diffOne.begin()));
//    set_difference(two.begin(), two.end(), one.begin(), one.end(), insert_iterator<set<T>>(diffTwo, diffTwo.begin()));
//
//    cout << "Roznica pierwszego zbioru\n";
//    for_each(diffOne.begin(), diffOne.end(), [](T el){
//        cout << el << endl;
//    });
//
//    cout << "Roznica drugiego zbioru\n";
//    for_each(diffTwo.begin(), diffTwo.end(), [](T el){
//        cout << el << endl;
//    });
//}
//
//int main(){
//    set<int> calkowite, calkowite1;
//
//    calkowite.insert(12);
//    calkowite.insert(42);
//    calkowite.insert(645);
//    calkowite.insert(315);
//    calkowite.insert(12);
//
//    calkowite1.insert(12);
//    calkowite1.insert(42);
//    calkowite1.insert(6451);
//    calkowite1.insert(313);
//    calkowite1.insert(12);
//
//    showDiff(calkowite, calkowite1, 1);
//
//    return 0;
//}

//5.1
//pair<int,int> duplikat(vector<int> calkowite){
//     //klucze w mapie musza byc unikatowe wiec nie mozna wlozyc dwoch takich samych elementow
//    int sum = 0, duplikat;
//    vector<int> vec = move(calkowite);
//    sort(vec.begin(), vec.end());
//    for(int i = 0; i < vec.size()-2; i++){
//        if(vec.at(i) == vec.at(i++)){
//            duplikat = vec.at(i);
//        }
//    }
//
//    set<int> duplikaty(vec.begin(), vec.end());
//    for_each(duplikaty.begin(), duplikaty.end(), [&sum](int n){
//        sum += n;
//    });
//
//    return make_pair(sum,duplikat);
//}
//
//int main() {
//    vector<int> calkowite;
//
//    calkowite.push_back(12);
//    calkowite.push_back(42);
//    calkowite.push_back(645);
//    calkowite.push_back(31);
//    calkowite.push_back(12);
//
//    pair<int,int> suma = duplikat(calkowite);
//    cout <<  suma.first << " " << suma.second;
//
//    return 0;
//}
