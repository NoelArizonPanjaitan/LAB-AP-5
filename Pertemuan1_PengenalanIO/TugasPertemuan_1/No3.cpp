#include <iostream>
using namespace std;

#define convertkm 0.001

int main() {
    int meter;
    system ("cls");
    cout << "Meter to Kilometer \n";
    cout << "Masukkan jarak (meter): ";
    cin >> meter;
    cout << meter << " meter dalam kilometer adalah " << meter * convertkm << " kilometer" << endl;
    return 0;
}