#include <iostream>
using namespace std;

int main()
{
    system("CLS");

    int tinggi;
    cout << "Input tinggi piramida: ";
    cin >> tinggi;

    for (int i = 0; i < tinggi; i++)
    {
        for (int j = tinggi; j <= i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}