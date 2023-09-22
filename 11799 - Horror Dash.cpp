#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, p = 1, temp;
    cin >> t;
    while(t--)
    {
        vector <int> v;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        int mx = v[0];
        for(int i = 0; i < n; i++) if(v[i] > mx) mx = v[i];

        cout << "Case " << p << ": " << mx << endl;
        p++;
    }

    return 0;
}
