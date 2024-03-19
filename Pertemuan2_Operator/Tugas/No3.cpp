#include <iostream>
#include <cmath>
using namespace std;

const float phi = 3.14159;

int main(){
    system("cls");

    int bangunRuang;

    cout << "Bangun ruang yang ingin di pilih: ";
    cout << "\n 1. Kerucut";
    cout << "\n 2. Limas Segitiga";
    cout << "\n 3. Bola";
    cout << "\n 4. Prisma";
    cout << "\nMasukkan Pilihan Anda : ";
    cin >> bangunRuang;
    system("cls");
    
    if (bangunRuang == 1){
        float jariJari, tinggi, sisi;

        cout << "Program menghitung luas dan volume Kerucut";
        cout << "\nMasukkan jari-jari kerucut : ";
        cin >> jariJari;
        cout << "Masukkan tinggi kerucut  : ";
        cin >> tinggi;
        cout << "Masukkan panjang sisi kerucut : ";
        cin >> sisi;

        float luasPermukaan = phi * jariJari * (jariJari + sisi);
        float volume = phi * pow(jariJari,2) * tinggi / 3;

        cout << "Luas permukaan kerucut adalah : "<< luasPermukaan << endl;
        cout << "dan Volume : "<< volume << endl;
    }
    else if (bangunRuang == 2){
        float alas, tinggiSegitiga, tinggiLimas;

        cout << "Program menghitung luas dan volume Limas Segitiga";
        cout << "\nMasukkan nilai dari alas : ";
        cin >> alas;

        cout << "Masukkan nilai dari tinggi alas : ";
        cin >> tinggiSegitiga;

        cout << "Masukkan nilai dari tinggi limas : ";
        cin >> tinggiLimas;

        float luasPermukaan = alas * tinggiSegitiga / 2;
        float volume = luasPermukaan * tinggiLimas / 3;

        cout << "Luas Permukaan Limas Segitiga dalah : " << luasPermukaan << " cm^2" << endl;
        cout << "dan Volume : " << volume << " cm^3" << endl;
    }
    else if (bangunRuang == 3){
        float jariJari;

        cout << "Program menghitung luas dan volume Bola";
        cout << "\nMasukkan jari-jari bola : ";
        cin >> jariJari;

        float luasPermukaan = 4 * phi * pow(jariJari,2);
        float volume = 4 * phi * pow(jariJari,3) / 3;

        cout << "Luas Permukaan Bola adalah : " << luasPermukaan << " cm^2" << endl;
        cout << "dan Volume : " << volume << " cm^3" << endl;
    }
    else if (bangunRuang == 4){
        float alas, tinggiAlas, sisi, tinggiPrisma;

        cout << "Program menghitung luas dan volume Prisma";
        cout << "\nMasukkan panjang sisi alas : ";
        cin >> alas;

        cout << "Masukkan tinggi segitiga: ";
        cin >> tinggiAlas;

        cout << "Masukkan sisi segitiga: ";
        cin >> sisi;

        cout << "Masukkan tinggi prisma segitiga : ";
        cin >> tinggiPrisma;

        float kelilingAlas = alas + tinggiAlas + sisi;
        float luasPermukaan = (2 * alas * tinggiAlas /2) + (kelilingAlas * tinggiPrisma);
        float volume = alas * tinggiAlas * tinggiPrisma /2;

        cout << "Luas Permukaan : " << luasPermukaan << " cm^2" << endl;
        cout << "Volume : " << volume << " cm^3" << endl;
    }
    else{
        cout << "error, silahkan jalankan ulang program";
    };
    return 0;
}