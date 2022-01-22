#include <iostream>
#include <regex>

using namespace std;

int main() {
//    string pat = "(\\+|\\-)[0-9]+\\.[0-9]+";
//    string search = "+412.4";
//    if(regex_match (search, regex(pat))){
//        cout << "Znaleziono" << endl;
//    }else{
//        cout << "Brak" << endl;
//    }
//
//    string godzina = "([0-1][0-9]|[2][0-3]):([0-5]|[0-9]{2})(:([0-5][0-9])|$)";
//    string h = "";
//    while(h != "stop"){
//        cin >> h;
//        if(regex_match(h, regex(godzina))){
//            cout << "Jest" << endl;
//        }else{
//            cout << "Brak" << endl;
//        }
//    }
    string input;
    string ulica = "[A-z]+";
    string kodPocztowy = "[0-9]{2}-[0-9]{3}";
    while(input != "stop"){
        cout << "Podaj nazwe ulicy:\n";
        cin >> input;
        if(regex_match(input, regex(ulica))){
            cout << "Jest" << endl;
        }else{
            cout << "Brak" << endl;
        }
    }
    return 0;
}
