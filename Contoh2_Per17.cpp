#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

char coment(char ket[30], int n);

int main() {
    char lagi, c[30];
    int i;

atas:
    system("cls");
    cout << "Masukkan nilai = ";
    cin >> i;

    coment(c, i);
    cout << c;

    cout << "\n\nIngin input lagi [Y/T]: ";
    cin >> lagi;

    if (lagi == 'Y' || lagi == 'y')
        goto atas;
    else
        return 0;
}

char coment(char ket[30], int n) {
    int a = n % 2;

    if (a == 1)
        strcpy(ket, "\n---Bilangan Ganjil---");
    else
        strcpy(ket, "\n---Bilangan Genap---");

    return ket[0];
}

