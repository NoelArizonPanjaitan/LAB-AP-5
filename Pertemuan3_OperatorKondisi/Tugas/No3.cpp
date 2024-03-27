#include <iostream>
#include <cmath>
using namespace std;

int main() {
    system("CLS");

    cout << "Program BMI" << endl;

    int beratBadan;
    float bmi,tinggi;
    string kategori;

    cout << "Masukkan berat badan Anda (kg) : ";
    cin >> beratBadan;

    cout << "Masukkan tinggi Anda (m) : ";
    cin >> tinggi;

    bmi = beratBadan / pow(tinggi,2);

        system("CLS");

    if (bmi < 18.5)
    {
        kategori = "Berat badan kurang";
    } 
        else if (18.5 <= bmi < 25)
        {
            kategori = "Berat badan normal";
        } 
        else if ( 25 <= bmi <30)
        {
            kategori = "Berat badan berlebih";
        }    
        else if (bmi >= 30)
        {
            kategori = "Obesitas";
        }
            else
            {
                kategori = "Invalid";
            }

    cout << "BMI Anda : " << bmi << endl;
    cout << "Kategori berat badan : " << kategori << endl;
    
    return 0;
}