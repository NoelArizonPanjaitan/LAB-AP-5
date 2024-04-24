#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int tahun, interval;

    cout << "Masukkan tahun :";
    cin >> tahun;

    while (tahun <= 1000 || tahun >= 9000)
    {
        cout << "Input tidak valid\n";
        cout << "Masukkan tahun :";
        cin >> tahun;
    }

    cout << "Masukkan interval tahun:";
    cin >> interval;

    while (interval <= -tahun || interval >= 9999 - tahun)
    {
        cout << "Input tidak valid\n";
        cout << "Masukkan interval tahun:";
        cin >> interval;
    }

    if (interval < 0)   
    {
        for (int i = interval; i <= 0; i++)
        {
            if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0))
            {
                cout << tahun << " adalah tahun kabisat" << endl;
            }
            else
            {
                cout << tahun << " bukan tahun kabisat" << endl;
            }
            tahun--;
        }
    }
    else
    {
        for (int i = 0; i <= interval; i++)
        {
            if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0))
            {
                cout << tahun << " adalah tahun kabisat" << endl;
            }
            else
            {
                cout << tahun << " bukan tahun kabisat" << endl;
            }
            tahun++;
        }
    }
    return 0;
}
