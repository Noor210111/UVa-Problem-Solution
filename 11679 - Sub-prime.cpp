#include <iostream>

using namespace std;

int main()
{
    int b, n, owe, owed, a;
    int owes[20];

    cin >> b >> n;

    while(b && n)
    {
        for(int i = 0; i < b; i++)
            cin >> owes[i];


        while (n--)
        {
            cin >> owe >> owed >> a;

            owes[owe - 1] -= a;
            owes[owed - 1] += a;
        }
        int p = 1;
        for(int i = 0; i < b; ++i)
            if (owes[i] < 0)
                p = 0;

        if(p == 1)
            cout << "S" << endl;
        else
            cout << "N" << endl;

        cin >> b >> n;
    }

    return 0;
}
