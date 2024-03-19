#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    system ("cls");
    
// getline untuk membaca satu baris    
    cout << "Menggunakan getline\n";
    cout << "Masukkan nama anda: ";
    getline(cin, nama); 
    cout << "Nama yang diinput: " << nama << endl;



// cin hanya membaca satu kata saja
    cout << "\nMenggunakan cin\n";
    cout << "Masukkan nama anda: ";
    cin >> nama; 
    cout << "Nama yang diinput: " << nama << endl;

    return 0;
}