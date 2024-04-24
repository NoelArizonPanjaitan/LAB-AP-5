#include <iostream>
using namespace std;

int main()
{
    system("cls");
    string kalimat;
    char n;
    char ulang;

x:
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    cout << "Masukkan sebuah huruf yang ingin dihilangkan: ";
    cin >> n;

    int karakter_terhapus = 0; 

    for (auto c : kalimat)
    {
        if (c == tolower(n) || c == toupper(n))
        {
            karakter_terhapus++; 
        }
        cout << c;
    }

    cout << endl;
    cout << "Jumlah karakter terhapus = " << karakter_terhapus; 

    cout << endl;
    cout << "Apakah Anda ingin mengulang program (Y/T) ? ";
    cin >> ulang;
    ulang = tolower(ulang);

    getchar();

    if (ulang == 'y')
    {
        goto x;
    }

    cout << "Terima kasih" << endl;
    return 0;
}
