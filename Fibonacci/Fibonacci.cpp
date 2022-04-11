#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    bool b;
    int c = 0;
    int i=0;
    int d = 1;
    int f=0;
    do
    {
        cout << "podaj liczbę fibonacci do wypisania\n";
        cin >> a;
        if (a > 0)
        {
            b = true;
        }
        else
        {
            b = false;
            cout << "blad\n";
        }
    } while (b == false);

    for (i; i < a; i++)
    {
        cout << c << ", ";
        f = c;
        c = c + d;
        d = f;
    }
}