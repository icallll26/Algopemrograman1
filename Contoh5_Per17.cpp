#include <iostream>
#include <stdio.h>
#include <cstdlib> // untuk system("cls")
using namespace std;

float luas(int r) {
    return (3.14 * r * r);
}

float kel(int r) {
    return (3.14 * 2 * r);
}

int main() {
    int j;

    system("cls");  // clear screen di Windows

    cout << "Masukkan Jari-jari = ";
    cin >> j;

    cout << "Luas lingkaran = " << luas(j) << endl;
    cout << "Keliling lingkaran = " << kel(j);

    return 0;
}

