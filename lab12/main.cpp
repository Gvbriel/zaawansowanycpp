#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
//    vector<int> vec;
//    float avgVec = 0;
//    int parzLicz = 0;
//
//    for(int i = 0; i < 10; i++){
//        vec.push_back(i);
//    }
//    int size = vec.size();
//
//    auto print = [](const int& n) { cout << n << "|"; };
//    auto parzyste = [&parzLicz](int n) { if(n % 2 ==0) parzLicz++;};
//    for_each(vec.begin(), vec.end(), print);
//    for_each(vec.begin(), vec.end(), parzyste);
//    cout << endl << parzLicz << endl;
//    cout << accumulate(vec.begin(), vec.end(), 0.0/vec.size());

    int sum = 0;
    vector<string> teksty;
    teksty.push_back("sus");
    teksty.push_back("su223s");
    teksty.push_back("su4s");
    teksty.push_back("su123s");
    teksty.push_back("su1231s");

    sort(teksty.begin(), teksty.end());
    cout << teksty[teksty.size()-1].length();
    for_each(teksty.begin(), teksty.end(), [&sum](string n){sum += n.length();});
    float avg = sum / teksty.size();
    cout << avg;

    return 0;
}
