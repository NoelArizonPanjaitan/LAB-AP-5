#include <iostream>
using namespace std;

int main()
{

    system("cls");

    string kalimat;

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    cout << reverse(kalimat);

    return 0;
}