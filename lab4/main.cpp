#include <random>
#include <iostream>

using namespace std;

int main() {
    random_device rd;
    mt19937 mt(rd());
    uniform_real_distribution<double> dist(1.0, 10.0);

    for (int i=0; i<16; ++i)
        cout << dist(mt) << "\n";
}