#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int umur;
    cout << "Berapa umur kamu : ";
    cin >> umur;

    if (umur < 0){
        cout << "Kamu bukan manusia";
    } else {
        /* if (umur > 0 && umur < 5){
            cout << "kamus masih balita";
        } else if(umur > 5 && umur <10){
            cout << "kamus masih anak-anak";
        } else if(umur > 10 && umur <18){
            cout << "kamus masih remaja";
        } else if(umur >19 && umur < 54){
            cout << "kamus sudah dewasa";
        } else if(umur > 55 && umur < 65 ){
            cout << "kamus sudah lansia";
        } else {
            cout << "kamu sudah menjadi seorang elder";
        } */
        switch (umur)
        {
        case 1 ... 10:
        cout << "test";
            break;
        case 11 ... 20:
        cout << "remaja";
            break;
        case 21 ... 53:
        cout << "dewasa";
            break;
        case 54 ... 56:
        cout << "lansia";
            break;
        
        default:
        cout << "error";
            break;
        }
    }
}
