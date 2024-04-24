#include <iostream>
using namespace std;

int main()
{
    int n;
    int bil = 1;

x:
    system("cls");
    char ulang;

    cout << "Masukkan batas suku dari deret bilangan: ";
    cin >> n;

    while ((n < 0) || (n > 100))
    {
        cout << "Inputan Anda Invalid" << endl;
        cout << "Masukkan batas suku dari deret bilangan (1 - 100): ";
        cin >> n;
    }

    cout << bil << " ";

    for (int i = 1; i <= n - 1; i++)
    {
        if (i % 2 == 1)
        {
            bil += 5;
            cout << bil << " ";
        }

        if (i % 2 == 0)
        {
            bil += 3;
            cout << bil << " ";
        }
    }

    cout << endl;
    cout << "Apakah Anda ingin mengulang program (Y/T) ? ";
    cin >> ulang;
    ulang = tolower(ulang);

    if (ulang == 'y')
    {
        goto x;
    }

    cout << "Terima Kasih " << endl;

    return 0;
}