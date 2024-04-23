#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int angka;
ulang:
    cout << "\nMasukkan suatu bilangan bulat :";
    cin >> angka;

    if (angka > 0)
    {
        if (angka % 2 == 0)
        {
            cout << angka << " Adalah bilangan genap" << endl;
        }
        else
        {
            cout << angka << " Bukan bilangan genap" << endl;
        }
        if (angka % 3 == 0)
        {
            cout << angka << " Habis dibagi 3" << endl;
        }
        else
        {
            cout << angka << " Tidak habis di bagi 3" << endl;
        }
        if (angka % 5 == 0)
        {
            cout << angka << " Habis di bagi 5" << endl;
        }
        else
        {
            cout << angka << " Tidak habis di bagi 5" << endl;
        }
        if (angka % 7 == 0)
        {
            cout << angka << " Habis di bagi 7" << endl;
        }
        else
        {
            cout << angka << " Tidak habis di bagi 7" << endl;
        }
    }
    else
    {
        cout << "Angka tidak valid silahkan mengulang";
        goto ulang;
    }

    return 0;
}