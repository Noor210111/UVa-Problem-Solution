#include <iostream>

using namespace std;

int main()
{
    int t, p = 1;
    cin >> t;

    while(t--)
    {
        int n, h = 0, l = 0;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];

        for(int i = 0; i < n - 1; i++)
        {
            if(a[i + 1] > a[i]) h++;
            else if(a[i + 1] < a[i]) l++;
        }

        cout << "Case " << p << ": " << h << " " << l << endl;
        p++;
    }

    return 0;
}
