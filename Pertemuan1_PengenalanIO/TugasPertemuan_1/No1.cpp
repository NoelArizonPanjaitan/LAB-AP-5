#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nama, nim;
    char kom;
    float ipk;

    system ("cls");
    cout << "Masukkan Nama anda: ";
    getline(cin, nama);
    cout << "Masukkan NIM anda: ";
    cin >> nim;
    cout << "Masukkan Kom anda: ";
    cin >> kom;
    cout << "Berapa IPK terakhir anda: ";
    cin >> ipk;
    cout << fixed << setprecision(2);
    kom = toupper(kom); 
    system ("cls");
    
    cout << "\nData Mahasiswa\n" << "\nNama         : " << nama << "\nNIM          : " << nim << "\nKom          : " << kom << "\nIPK terakhir : " << ipk << endl; 

    return 0; 
}