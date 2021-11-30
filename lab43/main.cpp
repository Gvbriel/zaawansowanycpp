#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getSum(int n)
{
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int count_digit(int number) {
    int count = 0;
    while(number != 0) {
        number = number / 10;
        count++;
    }
    return count;
}

void sortDigitsSum(vector<int> &calkowite){
    sort(calkowite.begin(), calkowite.end(), [](int num, int num2){
        return getSum(num) > getSum(num2);
    });
}

void sortDigitsCount(vector<int> &calkowite){
    sort(calkowite.begin(), calkowite.end(), [](int num, int num2){
        return count_digit(num) < count_digit(num2);
    });
}

int main() {

    vector<int> calkowite;

    int randomNumber;
    for (int index = 0; index < 10; index++) {
        randomNumber = (rand() % 100000) + 10;
        calkowite.push_back(randomNumber);
//        cout << randomNumber << endl;
    }

    calkowite.push_back(42);
    calkowite.push_back(468);
    calkowite.push_back(335);
    calkowite.push_back(501);
    calkowite.push_back(17054);
    calkowite.push_back(72521);
    calkowite.push_back(4794);
    sortDigitsSum(calkowite);
    cout << "\nPosortowane wedlug sumy\n";
    for_each(calkowite.begin(), calkowite.end(), [](int num){
        cout << num << endl;
    });

    sortDigitsCount(calkowite);
    cout << "\nPosortowane wedlug liczby cyfr\n";
    for_each(calkowite.begin(), calkowite.end(), [](int num){
        cout << num << endl;
    });

    return 0;
}
