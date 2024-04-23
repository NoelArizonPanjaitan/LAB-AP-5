#include <iostream>
using namespace std;

bool bilanganPrima(int n)
{
    if (n <= 1)
    {
        cout << "angka harus lebih dari 1";
        return false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " bukan bilangan prima";
            return false;
        }
    }

    cout << n << " adalah bilangan prima";
    return true;
}

int main()
{
    system("cls");
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;

    bilanganPrima(angka);

    return 0;
}
