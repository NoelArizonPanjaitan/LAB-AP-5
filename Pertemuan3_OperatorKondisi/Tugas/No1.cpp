#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int bilangan;

    cout << "Program Bilangan Genap / Ganjil" << endl;
    cout << "Masukkan sebuah bilangan bulat : ";
    cin >> bilangan;

    if (bilangan % 2 == 0){
        cout << bilangan << " merupakan bilangan genap";
    } else {
        cout << bilangan << " merupakan bilangan ganjil";
    }
    
    return 0;
}