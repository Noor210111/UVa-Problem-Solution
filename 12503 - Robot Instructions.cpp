#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, sum = 0, a[100], b;
        cin >> n;

        for(int i = 1; i <= n; i++)
        {
            char s[15];
            cin >> s;
            if(strcmp(s, "LEFT") == 0)
            {
                sum -= 1;
                a[i] = -1;
            }
            else if(strcmp(s, "RIGHT") == 0)
            {
                sum += 1;
                a[i] = 1;
            }
            else
            {
                cin >> s >> b;
                sum += a[b];
                a[i] = a[b];
            }
        }

        cout << sum << endl;
    }

    return 0;
}
