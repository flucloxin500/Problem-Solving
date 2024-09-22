#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[110], t[110];
    cin >> s;
    cin >> t;

    int ss, tt, i;
    ss = strlen(s);
    tt = strlen(t);

    if (ss == tt)
    {
        int f = 0 ;
        for (i = 0; i < ss ; i++)
        {
            if (s[ss - i - 1] == t[i])
            {
                f++;
            }
        }

        if (f == ss)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    else 
    {
        cout<<"NO"<<endl;
    }
}
