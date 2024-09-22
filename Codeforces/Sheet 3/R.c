#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int N , t ;
    int cnt = 0 ;
    cin>>N;

    int A[N] , B[N] ;

    int i , j ;

    for ( i = 0 ; i < N ; i++)
    {
        cin>>A[i];
    }
    for ( i = 0 ; i < N-1 ; i++)
    {
        for ( j = 0 ; j < N-1-i ; j++)
        {
           if ( A[j]>A[j+1])
            {
                t = A[j];
                A[j] = A[j+1];
                A[j+1] = t ;
            } 
        }
    }
    for ( i = 0 ; i < N ; i++)
    {
        cin>>B[i] ;
    }
    for ( i = 0 ; i < N-1 ; i++)
    {
        for ( j = 0 ; j < N-1-i ; j++)
        {
           if ( B[j]>B[j+1])
            {
                t = B[j];
                B[j] = B[j+1];
                B[j+1] = t ;
            } 
        }
    }
    for ( i = 0 ;  i  < N ; i++)
    {
        if ( A[i] == B[i])
        {
            cnt++;
        }
    }

    if ( cnt  == N)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    
}
