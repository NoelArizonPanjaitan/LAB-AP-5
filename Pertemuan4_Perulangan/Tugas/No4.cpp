#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int n;
    string hasil,gandaO,gandaE,gandaSeru;

    cout << "Input nilai n:";
    cin >> n;

    while (n < 0)
    {
        cout << "Inputan invalid, silahkan input bilangan positif\n";
        cout << "Input nilai n:";
        cin >> n;
    }

    hasil = 'H' + gandaO.append(n, 'o') + 'r' + gandaE.append(n, 'e') + gandaSeru.append(n, '!');
    cout << hasil;
    return 0;
}