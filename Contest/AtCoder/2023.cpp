
/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ab[110];
    cin >> ab;
    int length;
    int first;
    length = strlen(ab);
    int i;
    for ( i = 0 ; i < length-1 ; i++)
    {
        if( ab[length-1] == '3')
        {
            cout<<ab[i];
        }
    }
    cout<<"4";
    return 0;
}