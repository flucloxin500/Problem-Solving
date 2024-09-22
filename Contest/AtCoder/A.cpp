#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int N ;
    int i ;
    cin>>N ;
    int count = 0 ;

    int A[N] ;

    for ( i = 0 ; i < N ; i++)
    {
        cin >>A[i] ;
    }
    for ( i = 0 ; i < N ; i++)
    {
        if ( A[0] == A[i])
        {
            count++ ;
        }
    }

    if ( count == N)
    {
        cout<<"Yes"<<endl;
    }
    else 
    {
        cout<<"No"<<endl;
    }

    return 0;
}