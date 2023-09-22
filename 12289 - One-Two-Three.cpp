#include <iostream>

using namespace std;

int main()
{
    int t, i, j, c;
    string a;

    cin >> t;

    for(i = 1; i <= t; i++)
    {
        cin >> a;

        c = 0;
        for(j = 0; a[j] != '\0'; j++)
        {
            c++;
        }
//cout << c << endl;
        if(c == 3)
        {
            if((a[0] == 'o' && a[1] == 'n') || (a[0] == 'o' && a[2] == 'e') || (a[1] == 'n' && a[2] == 'e'))
                cout << '1' << endl;
            else if((a[0] == 't' && a[1] == 'w') || (a[0] == 't' && a[2] == 'o') || (a[1] == 'w' && a[2] == 'o'))
                cout << '2' << endl;
        }

        else if(c == 5)
        {
            if((a[0] == 't' && a[1] == 'h' && a[2] == 'r' && a[3] == 'e') ||                    //three /threx /thrxe /thxee /txree / xhree
               (a[0] == 't' && a[1] == 'h' && a[2] == 'r' && a[4] == 'e') ||
               (a[0] == 't' && a[1] == 'h' && a[3] == 'e' && a[4] == 'e') ||
               (a[0] == 't' && a[2] == 'r' && a[3] == 'e' && a[4] == 'e') ||
               (a[1] == 'h' && a[2] == 'r' && a[3] == 'e' && a[4] == 'e'))
                cout << '3' << endl;
        }
    }

    return 0;
}
