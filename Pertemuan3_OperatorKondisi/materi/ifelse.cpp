#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    char nilai;

    cout << "Berapa nilai kamu: ";
    cin >> nilai;

    if (nilai == 'A'){
        cout << "bagus, pertahankan";
    } else if (nilai == 'B'){
        cout << "Tingkatkan";
    } else if (nilai == 'C'){
        cout << "Perlu di tingkatkan";
    } else if (nilai == 'D'){
        cout << "Perlu belajar lagi";
    } else if (nilai == 'E'){
        cout << "Perlu belajar lagi yah";
    } else {
        cout << "Invalid, silahkan input dengan benar";
    }
    
    return 0;
}