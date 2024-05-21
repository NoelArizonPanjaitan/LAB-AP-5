#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int bil[10];
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 1)
        {
            cout << "Nilai " << i << ", alamat memori = " << &bil[i] << endl;
        }
    }

    return 0;
}