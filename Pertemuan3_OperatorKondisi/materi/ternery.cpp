#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int x;
    string hasil;


    cout << "masukkan tinggi badan anda(Cm) :";
    cin >> x;

    hasil = (x > 200) ? "Kamu berbakat menjadi pemain basket" : "masih kurang untuk dibilang berbakat menjadi pemain basket";
    cout << hasil << endl;
    
    return 0;
}