#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int t, i;
    long long int a, s = 0;
    char aa[20];

    cin >> t;
    for(i = 1; i <= t; i++)
    {
        cin >> aa;
        if(strcmp(aa, "donate") == 0)
        {
            cin >> a;
            s = s + a;
        }
        if(strcmp(aa, "report") == 0)
        {
            cout << s << endl;
        }
    }

    return 0;
}
