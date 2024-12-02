#include <iostream>
using namespace std;

int main()
{

    short t, x = 0;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        if (s == "++X" || s == "X++")
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout << x;

    return 0;
}