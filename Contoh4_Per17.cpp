#include <iostream>
#include <cstdlib> 
using namespace std;

void tambah(int *c, int *d);

int main() {
    int a = 3, b = 7;

    system("cls"); 

    cout << "Nilai Sebelum Pemanggilan Fungsi";
    cout << "\na = " << a << " b = " << b;

    tambah(&a, &b);

    cout << "\n\nNilai Setelah Pemanggilan Fungsi";
    cout << "\na = " << a << " b = " << b;

    system("pause");
    return 0;
}

void tambah(int *c, int *d) {
    *c += 7;
    *d += 5;

    cout << "\n\nNilai di Akhir Fungsi Tambah()";
    cout << "\nc = " << *c << " d = " << *d;
}

