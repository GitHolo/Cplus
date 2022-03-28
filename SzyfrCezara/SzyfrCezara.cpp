#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!\n";
    string tab;
    int dlugosc;
    int przesuniencie;
    int i;
    cout << "podaj słowo do zaszyfrowania\n";
    cin >> tab;
    dlugosc = size(tab);
    cout << "długość wyrazu - " << dlugosc<<endl;
    cout << "podaj o ile znaków przesunąć\n";
    cin >> przesuniencie;
    while (true)
    {
        if (przesuniencie >= -26)
        {
            cout << "Błąd, liczba przesunięcia może jedynie być przesunięta o 26 lub -26\n";
        }
        else if (przesuniencie <= 26)
        {
            cout << "Błąd, liczba przesunięcia może jedynie być przesunięta o 26 lub -26\n";
        }
        else
        {
            while (i <= dlugosc)
            {
                if(tab+przesuniencie<=z)
            }
        }
    }
}