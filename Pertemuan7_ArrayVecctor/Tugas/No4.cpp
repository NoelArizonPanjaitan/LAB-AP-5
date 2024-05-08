#include <iostream>
#include <vector>
using namespace std;

int main() {
    system("cls");
    vector<int> angka;
    int input;

    cout << "Masukkan deretan angka (akhiri dengan -1): ";
    while (cin >> input && input != -1) {
        angka.push_back(input);
    }

    cout << "Deretan angka: ";
    for (int i : angka) {
        cout << i << " ";
    }
    cout << "\nPanjang vektor: " << angka.size() << endl;

    while (!angka.empty())
    {
        cout << "Angka: " << angka.front() << endl;
        angka.erase(angka.begin());
    }

    cout << "Panjang vektor: " << angka.size() << endl;

    return 0;
}