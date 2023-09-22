#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, p = 1;
    cin >> t;

    vector <pair<string,int>> v(120);

    while(t--)
    {
       for(int i = 0; i < 10; i++)
       {
           cin >> v[i].first >> v[i].second;
       }

       int mx = v[0].second;
       for(int i = 0; i < 10; i++)
       {
           if(v[i].second > mx)
            mx = v[i].second;
       }

       cout << "Case #" << p << ":" << endl;

       for(int i = 0; i < 10; i++)
       {
           if(v[i].second == mx)
                cout << v[i].first << endl;
       }
       p++;
    }

    return 0;
}
