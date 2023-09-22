#include <iostream>

using namespace std;

int main()
{
    int l, w, h, t, c = 1;

    cin >> t;

    while(t--)
    {
        cin >> l >> w >> h;

        if(l > 20 || w > 20 || h > 20)
            cout << "Case " << c << ": " << "bad" << endl;
        else
            cout << "Case " << c << ": " << "good" << endl;
        c++;
    }

    return 0;
}
