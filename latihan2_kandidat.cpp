#include<iostream>
using namespace std;

int main() {
    int tahun;
    cin >> tahun;

    if (tahun %4 == 0) {
        cout << "KABISAT";
    } else {
        cout << "BUKAN KABISAT";
    }  

    return 0;
}