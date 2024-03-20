#include <iostream>
using namespace std;

int main(){
    system("cls");
    int I = 2, K = 7, L = 1, C = 9, U = 5, S = 6;
    
    cout << "a. 3-1 < I || K-5 < 8+2 && L+7 >= 9+3" << endl;
    bool a = (3-1 < I) || (K-5 < 8+2) && (L+7 >= 9+3);
    cout << "Hasilnya adalah : " << a << " (False)";
    cout << endl;
// Hitungan Manual
    /*  3 - 1 < 2 = False 
    7 - 5 < 10 = True 
    8 >= 12 = False
    False || True && False = False */


    cout << "\nb. L%3 > U && (C/U < S || 3*I-K > 0)" << endl;
    bool b = (L%3 > U) && (C/U < S || 3*I-K > 0);
    cout << "Hasilnya adalah : " << b << " (False)";
    cout << endl;
// Hitungan Manual
    /* L % 3 > U >>> 1 % 3 > 5 = false
    9/5 < 6 = true
    3*2-7 > 0 = false
    False && True || False = False */


    cout << "\nc. I-9 > K OR L+3 < 4*C" << endl;
    bool c = (I - 9 > K) || (L + 3 < 4 * C);
    cout << "Hasilnya adalah : " << c << " (True)";
    cout << endl;
// Hitungan Manual
    /* 2 - 9 > 7 = false
    1 + 3 < 4 * 9 = true
    false || true = true */


    cout << "\nd. I OR K AND L XOR 3 SHL 2" << endl;
    int d = I | K & L ^ 3 << 2;
    cout << "Hasilnya adalah : " << d << endl;
// Hitungan Manual
    /* 3 shl 2 --> 0011 shl 2 = 1100(12)
    7 & 1 --> 0111 & 0001 = 0001(1)
    1 XOR 12 --> 0001 XOR 11OO = 1101(13)
    2 OR 13 --> 0010 OR 1101 = 1111(15)
 */
    return 0;
}