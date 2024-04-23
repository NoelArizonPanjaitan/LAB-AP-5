#include <iostream>
using namespace std;

string gantiHuruf(string nama)
{
    for (int i = 0; i < nama.length(); ++i)
    {
        if (nama[i] == 'a' || nama[i] == 'i' || nama[i] == 'u' || nama[i] == 'e' || nama[i] == 'o')
        {
            nama[i] = 'o';
        }
    }
    return nama;
}

int main()
{
    string nama, hasil;

    cout << "Masukkan nama: ";
    getline(cin, nama);

    hasil = gantiHuruf(nama);

    cout << "Hasil: " << hasil << endl;

    return 0;
}