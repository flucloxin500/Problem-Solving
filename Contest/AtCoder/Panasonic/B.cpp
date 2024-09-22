/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N , i;

    cin>>N; 
    
    for ( i = N ; i <920 ; i++)
    {
        int h = i / 100;
        int t = (i/10) % 10 ;
        int o = i % 10 ;

        if ( h * t == o)
        {
            cout<<i<<endl;
            break;
        }
    }
}
