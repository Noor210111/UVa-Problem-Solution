#include <iostream>

using namespace std;

int main()
{
    int t, n, a[20], i, j, r;

    cin >> t;

    for(i = 1; i <= t; i++)
    {
        cin >> n;
        for(j = 0; j < n; j++)
            cin >> a[j];

        int mn = a[0], mx = a[0];
        for(j = 0; j < n; j++)
        {
            if(a[j] < mn)
                mn = a[j];
            if(a[j] > mx)
                mx = a[j];
        }

        r = 2 * (mx - mn);

        cout << r << endl;
    }
}
