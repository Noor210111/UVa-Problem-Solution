#include <iostream>

using namespace std;

int main()
{
    int c = 1;
    while(1)
    {
        int t, i, a[1000], y = 0, n = 0;

        cin >> t;
        if(t == 0)
            return 0;

        for(i = 0; i < t; i++)
        {
            cin >> a[i];
            if(a[i] == 0)
                y++;
            else
                n++;
        }

        cout << "Case " << c << ": " << n - y << endl;
        c++;
    }

    //return 0;
}
