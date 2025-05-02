#include<iostream>
#include<cstring>  // Untuk strcmp
using namespace std;

int main() {
    char username[15];
    char password[15];
    
    cout << "Masukan username: "; 
    cin >> username;
    cout << "Masukan password: "; 
    cin >> password;
    
    // Menggunakan strcmp untuk membandingkan string
    if (strcmp(username, "admin") == 0 && strcmp(password, "admin") == 0) 
        cout << "Anda adalah admin" << endl;
    else
        cout << "Anda bukan admin" << endl;
    
    return 0;
}

