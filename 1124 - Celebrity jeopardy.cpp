#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char h[10000];

    while(gets(h))
    {
        //getline(cin, h);

        cout << h << endl;
    }

    return 0;
}
