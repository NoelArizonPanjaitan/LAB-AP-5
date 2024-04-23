#include <iostream>
using namespace std;

int main()
{
    system("CLS");

    int tinggi;

    cout << "input tinggi segitiga: ";
    cin >> tinggi;

    for (int i = 0; i < tinggi; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}