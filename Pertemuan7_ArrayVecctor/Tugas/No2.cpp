#include <iostream>
#include <cmath>
using namespace std;

double Efisiensi(int matriks[3][3], int k1, int k2, int k3)
{
    int a = matriks[0][k1];
    int b = matriks[1][k2];
    int c = matriks[2][k3];
    return sqrt(a * a + b * b + c * c);
}

int main()
{
    system("cls");
    int matriks[3][3];

    cout << "Matriks ordo 3x3:\n";
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << "Matriks [" << i + 1 << "][" << j + 1 << "]= ";
            cin >> matriks[i][j];
        }
    }

    double maxEfisiensi = 0.0;

    for (int k1 = 0; k1 < 3; ++k1)
    {
        for (int k2 = 0; k2 < 3; ++k2)
        {
            for (int k3 = 0; k3 < 3; ++k3)
            {
                if (k1 != k2 && k1 != k3 && k2 != k3)
                {
                    double efisiensi = Efisiensi(matriks, k1, k2, k3);
                    if (efisiensi > maxEfisiensi)
                    {
                        maxEfisiensi = efisiensi;
                    }
                }
            }
        }
    }

    cout << "Efisiensi tertinggi: " << maxEfisiensi << endl;

    return 0;
}
