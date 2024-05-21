#include <iostream>
using namespace std;

int main()
{
    system("CLS");

    const char *kata = "K O M P U T E R";

    cout << kata << endl;
    kata += 8;
    cout << "Huruf ke-5 dari K O M P U T E R adalah " << *kata;
    return 0;
}