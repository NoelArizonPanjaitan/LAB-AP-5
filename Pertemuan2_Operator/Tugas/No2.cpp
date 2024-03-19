#include <iostream>
#include <cmath> 
using namespace std;

int main(){
    system("cls");
    float a,b,c;
    int x1,x2;

    cout << "Program untuk menghitung akar-akar persamaan suatu persamaan kuadrat" << endl;

    cout << "Input nilai A : ";
    cin >> a;

    cout << "Input nilai B : ";
    cin >> b;

    cout << "Input nilai C : ";
    cin >> c;

    x1 = (-b + sqrt((pow(b, 2) - 4*a*c)) / (2*a));
    x1 = (-b - sqrt((pow(b, 2) - 4*a*c)) / (2*a));

    cout << "Akar-akarnya dari Persamaan " << a << "x2 + " << c << " = 0 " << "adalah : " << endl;
    cout << "x1 : " << x1 << endl;
    cout << "x2 : " << x2 << endl;
    
    // jika keluarannya merupakan nan(Not a Number) maka nilai dari akar-akar tersebut tidak dapat terdefinisi karena mengandung bilangan imajiner
    return 0;
}
