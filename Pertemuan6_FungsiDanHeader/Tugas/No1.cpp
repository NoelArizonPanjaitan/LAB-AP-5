#include <iostream>
#include <vector>
#include <string>
using namespace std;


// Fungsi untuk implementasi algoritma FizzBuzz
string fizzBuzz(int n)
{
    if (n % 3 == 0 && n % 5 == 0)
        return "FizzBuzz";
    else if (n % 3 == 0)
        return "Fizz";
    else if (n % 5 == 0)
        return "Buzz";
    else
        return to_string(n);
}

// Fungsi untuk menghasilkan deret segitiga
vector<int> deret(int x)
{
    vector<int> series;
    for (int n = 1; n <= x; n++)
    {
        series.push_back(n * (n + 1));
    }
    return series;
}

int main()
{
    system("cls");
    int num;
    cout << "Input batas perulangan pada deret : ";
    cin >> num;

    while (num < 3 || num > 100)
    {
        cout << "Input tidak valid, berikan nilai dengan rentang 3 - 100\n";
        cout << "Input batas perulangan pada deret :";
        cin >> num;
    }

    vector<int> Deret = deret(num);
    vector<string> FizzBuzz;
    int lastInt = 0;

    for (int n : Deret)
    {
        string fb = fizzBuzz(n);
        FizzBuzz.push_back(fb);
        if (fb != "Fizz" && fb != "Buzz" && fb != "FizzBuzz")
        {
            lastInt = n;
        }
    }

    for (int i = 0; i < FizzBuzz.size(); i++)
    {
        cout << FizzBuzz[i];
        if (i != FizzBuzz.size() - 1)
        {
            cout << ", ";
        }
    }

    if (lastInt != 0)
    {
        cout << "\nTipe data " << lastInt << " adalah i\n";
    }

    return 0;
}