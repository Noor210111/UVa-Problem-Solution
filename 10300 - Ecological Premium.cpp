#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t, a, s, sum;
    float l;

    cin >> n;

    while(n--)
    {
        cin >> t;
        sum = 0;
        while(t--)
        {
            cin >> l >> a >> s;

            sum = sum + ((l / a) * a * s);
        }
        cout << sum << endl;
    }

    return 0;
}
