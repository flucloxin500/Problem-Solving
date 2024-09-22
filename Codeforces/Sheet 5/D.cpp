                                    /*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include<bits/stdc++.h>
using namespace std;

#define for_loop(start,end,step) for ( int i = start ; i < end ; i+= step)
#define input int n , i;
#define N cin>>n;
int prime (int x)
{
    if ( x == 1)
    {
        return 0 ;
    }
    for ( int i = 2 ; i < x ; i++)
    {
        if ( x % i == 0)
        {
            return 0;
        }
    }

    return 1 ;
}

int main()
{
    input;
    N;
    int y ;

    for ( i = 0 ; i < n ; i++)
    {
        cin>>y;
        int fprime = prime(y);
        if ( y == 2)
        {
            cout<<"YES"<<endl;
            continue;
        }

        if( fprime == 1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;

}
