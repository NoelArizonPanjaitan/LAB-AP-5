#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int tinggi;

    cout << "Masukkan tinggi diamond (ganjil): ";
    cin >> tinggi;

    if (tinggi % 2 == 0)
    {
        cout << "Tinggi harus ganjil!" << endl;
        return 1;
    }

    int lebar = tinggi + 1;

    // Bagian atas diamond
    for (int i = 0; i < tinggi / 2 + 1; i++)
    {
        for (int j = 0; j < lebar / 2 - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Bagian bawah diamond
    for (int i = tinggi / 2; i > 0; i--)
    {
        for (int j = 0; j < lebar / 2 - i + 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i - 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
