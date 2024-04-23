#include <iostream>
using namespace std;

int main()
{
    system("CLS");

    int lebar,panjang;
    cout << "masukkan lebar: ";
    cin >> lebar;
    cout << "masukkan panjang: ";
    cin >> panjang;

    for (int i = 0; i < lebar; i++)
    {
        for (int j = 0; j < panjang; j++)
        {
            cout << " *";
        }
        cout << endl;
    }

    return 0;
}