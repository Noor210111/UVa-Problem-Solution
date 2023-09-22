#include <iostream>

using namespace std;

int main()
{
    int t, i, r;
    long long int n, s;

    cin >> t;

    for(i = 1; i <= t; i++)
    {
        cin >> n;
        s = ((((((n * 567) / 9) + 7492) * 235) / 47) - 498);

        if(s < 0)
            s = s * -1;

        s = s / 10;
        r = s % 10;

        cout << r << endl;
    }

     return 0;
}
