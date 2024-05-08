#include <iostream>
#include <array>
using namespace std;

int main()
{
    system("cls");

    array<int, 5> nilai;

    for (int i = 0; i < 5; i++)
    {
        nilai[i] = i;
        cout << "nilai [" << i << "] = " << nilai[i] << endl;
        cout << "address " << &nilai[i] << endl;
    }

    cout << "Ukuran : " << nilai.size() << endl;
    cout << "addres awal : " << nilai.begin() << endl;
    cout << "addres akhir : " << nilai.end() << endl;
    
    cout << "nilai ke-2 : " << nilai.at(2) << endl;4
    return 0;
}