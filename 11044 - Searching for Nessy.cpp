#include <iostream>

using namespace std;

int main()
{
    int t, i, n, m;

    cin >> t;

    for(i = 1; i <= t; i++)
    {
        cin >> n;
        cin >> m;

        cout << (n / 3) * (m / 3) << endl;
    }

    return 0;
}
