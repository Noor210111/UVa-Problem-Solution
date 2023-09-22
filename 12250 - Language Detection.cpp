#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int c = 0;
    char s[15];

    while(1)
    {
        c++;
        int cnt = 0, i;
        cin >> s;
        for(i = 0; s[i] != '\0'; i++)
            cnt++;
        if(cnt <= 14)
        {
            if(strcmp(s, "#") == 0)
                return 0;
            else if(strcmp(s, "HELLO") == 0)
                cout << "Case " << c << ": " << "ENGLISH" << endl;
            else if(strcmp(s, "HOLA") == 0)
                cout << "Case " << c << ": " << "SPANISH" << endl;
            else if(strcmp(s, "HALLO") == 0)
                cout << "Case " << c << ": " << "GERMAN" << endl;
            else if(strcmp(s, "BONJOUR") == 0)
                cout << "Case " << c << ": " << "FRENCH" << endl;
            else if(strcmp(s, "CIAO") == 0)
                cout << "Case " << c << ": " << "ITALIAN" << endl;
            else if(strcmp(s, "ZDRAVSTVUJTE") == 0)
                cout << "Case " << c << ": " << "RUSSIAN" << endl;
            else
                cout << "Case " << c << ": " << "UNKNOWN" << endl;
        }
    }
}
