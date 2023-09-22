#include <iostream>

using namespace std;

int main()
{
    int t, a, b;
    char x;

    cin >> t;

    while(t--)
    {
        cin >> a >> b;

        if(a == b)
            cout << '=' << endl;
        else
        {
            x = a > b ? '>' : '<';
            cout << x << endl;
        }
    }

    return 0;
}
