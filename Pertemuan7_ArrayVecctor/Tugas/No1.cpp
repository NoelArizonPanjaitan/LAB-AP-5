#include <iostream>
using namespace std;

int main() {
    system("cls");
    int jumlahBaris;
    cout << "Masukkan jumlah baris untuk segitiga Pascal: ";
    cin >> jumlahBaris;

    int nilai[30][30];

    for (int baris = 0; baris < jumlahBaris; baris++)
    {
        for (int spasi = 0; spasi < jumlahBaris - baris - 1; spasi++)
            cout << " ";

        for (int kolom = 0; kolom <= baris; kolom++)
        {
            if (kolom == 0 || kolom == baris)
                nilai[baris][kolom] = 1;
            else
                nilai[baris][kolom] = nilai[baris - 1][kolom - 1] + nilai[baris - 1][kolom];

            cout << nilai[baris][kolom] << " ";
        }

        cout << endl;
    }

    int index1, index2;

    // perulangan untuk inputan invalid jika index2 lebih besar dari index1
    Ulang2:

    cout << "Masukkan dua buah bilangan index(1--" << jumlahBaris << "; y<=x): ";
    cin >> index1;
    cin >> index2;

    while (index2 > index1 || index1 > jumlahBaris || index2 > jumlahBaris) {
        cout << "Inputan invalid" << endl;
        goto Ulang2;
    }

    cout << "Nilai dari suatu elemen dalam segitiga pascal: " << nilai[index1-1][index2-1] << endl;

    return 0;
}