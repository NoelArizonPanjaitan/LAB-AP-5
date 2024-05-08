#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    system("cls");
    string S;
    cout << "Masukkan string yang terkena virus: ";
    getline(cin, S);

    int mid = S.size() / 2;
    string left = S.substr(0, mid);
    string right = S.substr(mid);

    reverse(left.begin(), left.end());
    reverse(right.begin(), right.end());

    string result = left + right;
    cout << "String asli: " << result << endl;

    return 0;
}