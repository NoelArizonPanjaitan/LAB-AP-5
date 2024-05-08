#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int arrayNiali[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int nilai : arrayNiali)
    {
        cout << "address " << &nilai << " nilai " << nilai << endl;
        nilai = 1;
    }

    for (int &nilaiRef : arrayNiali)
    {
        nilaiRef *= 2;
    }

    cout << endl;

    for (int refNilai : arrayNiali)
    {
        cout << "address " << &refNilai << " nilai " << refNilai << endl;
    }

    return 0;
}