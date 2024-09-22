                                    /*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم,*/
#include<bits/stdc++.h>
using namespace std;

#define for_loop(start,end,step) for ( int i = start ; i < end ; i+= step)
#define input int n , i;
#define N cin>>n;
int main()
{
    input;
    N;
    char word[n] ;
    int D = 0 ;
    int A = 0 ;

    for_loop(0,n,1)
    {
        cin>>word[i] ;

        if ( word[i] == 'A')
        {
            A++ ;
        }
        else 
        {
            D++ ;
        }
    }

    if ( A > D )
    {
        cout<<"Anton"<<endl;
    }
    else if ( A < D )
    {
        cout<<"Danik"<<endl;
    }

    else 
    {
        cout<<"Friendship"<<endl;
    }
}
