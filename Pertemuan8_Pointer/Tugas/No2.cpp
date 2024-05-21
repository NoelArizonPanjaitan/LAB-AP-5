#include <iostream>
using namespace std;

int main()
{
    system("CLS");

    int x, *px;
    x = 25;
    px = &x;
    *px = x;
    cout << "Alamat X:" << &x << endl;
    cout << "Alamat Pointer Px:" << px << endl;
    // Pertanyaan:
    // (1) px = &x 
    // (2) *px = x 
    // Apakah (1) ekuivalen dengan (2)?
    // Alamat X:  &x
    // Alamat Pointer Px:  
    // Nilai Px: px
    // Nilai X:  x 
    // Dikarenakan alamat dari px dengan X sama dan nilai dari px dengan X sama maka pernyataan 1 ekuivalen dengan pernyataan 2

    return 0;
}