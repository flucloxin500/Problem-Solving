                                    /*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[110] ;
    cin >> s ;

    int x , i ;
    int h = 0 , e = 0 ,  l = 0 , o = 0 ;

    x  = strlen(s) ;

    for ( i = 0 ; i < x ; i++)
    {
        if( s[i] == 'h')
        {
            h++;
        }
        else if ( h >= 1 && s[i] == 'e')
        {
            e++;
        }
        else if ( e >= 1 && s[i] =='l')
        {
            l++;
        }
        else if ( l >= 2 && s[i] =='o')
        {
            o++;
        }
    }

    if ( o >= 1 )
    {
        cout<<"YES"<<endl;
    }

    else 
    {
        cout<<"NO"<<endl;
    }
}
