// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cout << "ile liczb pierwszych mam wyswietlic?" << endl;
    cin >> n;
    int p = 2;
    for (int c = 0; c < n; c)
    {
        bool pier = true;
        for (int i = 2; i <= p / 2; ++i) {
            if (p % i == 0) {
                pier = false;
                break;
            }
        }
        if (pier)
        {
            cout << p << endl;
            c++;
        }
        p++;
        
    }
}

