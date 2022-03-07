// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World!\n";
    int l = 2;
    int p = 2;
    int n = 0;
    cout << "ile liczb pierwszych mam wyswietlic?" << endl;
    cin >> n;
    for(int b = 1; b<=n; b++)
    {
        for (int a = 1; a <= n; a++)
        {
            if (l % p == 0)
            {
                p = p + 1;
            }
            else
            {
                cout << l << endl;
                l++;
            }
        }
    }
}

