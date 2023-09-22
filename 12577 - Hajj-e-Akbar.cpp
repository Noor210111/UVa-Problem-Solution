#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int c = 1;
    char a[20];
    while(1)
    {
        cin >> a;
        if(strcmp(a, "*") == 0)
            return 0;
        else if(strcmp(a, "Hajj") == 0)
        {
            cout << "Case " << c << ": " << "Hajj-e-Akbar" << endl;
            c++;
        }
        else if(strcmp(a, "Umrah") == 0)
        {
            cout << "Case " << c << ": " << "Hajj-e-Asghar" << endl;
            c++;
        }
    }
}
