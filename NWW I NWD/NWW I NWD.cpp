#include <iostream>
using namespace std;

int main()
{
    
    int a = 0;
    int b = 0;
    cout << "Hello World!\n";
    cout << "Podaj dwie liczby\n";
    cin >>a>>b;
    int c = a;
    int d = b;
    while (a != b)
    {
        if (a <= b)
        {
            b = b - a;
        }
        else
        {
            a = a - b;
        }
    }
    cout << "NWD = " << a << endl;
    int iloczyn = c * d;
    while (c != d)
    {
        if (c <= d)
        {
            d = d - c;
        }
        else
        {
            c = c - d;
        }
    }
    float nww = iloczyn / c;
    cout << "NWW = " << nww;
}