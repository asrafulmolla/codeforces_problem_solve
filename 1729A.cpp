#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int first = abs(a - 1);
        int second = abs(b - c) + abs(c - 1);
        if (first< second)
        {
            cout << "1" << endl;
        }
        else if (first == second)
        {
            cout << "3" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }

}
