#include <iostream>

using namespace std;

int main()
{
    while(1)
    {
        int t;
        cin >> t;

        if(t == 0)
            return 0;

        int m, n;
        cin >> m >> n;

        while(t--)
        {
            int x, y;
            cin >> x >> y;

            if(x == m || y == n)
                cout << "divisa" << endl;
            else if(x > m && y > n)
                cout << "NE" << endl;
            else if(x < m && y > n)
                cout << "NO" << endl;
            else if(x < m && y < n)
                cout << "SO" << endl;
            else
                cout << "SE" << endl;
        }
    }
}
