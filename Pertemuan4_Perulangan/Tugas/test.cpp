#include <iostream>
using namespace std;

int operasi(int num1, int num2)
{
    return num1 * num2;
}
float operasi(float num1, float num2)
{
    return num1 / num2;
}

int main()
{
    system("cls");

    cout << "Perkalian : " << operasi(10, 5) << endl;
    cout << "Pembagian : " << operasi(10, 5) << endl;
    return 0;
}