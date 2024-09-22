#include<iostream>
#include<climits>

using namespace std ;
int main()
{
    long long i,n,x,j,d;

    cin>>n ;

    for(i=1; i<=n; i++)
    {
        cin>>x;
        d=1;
        for(j=1; j<=x; j++)
        {
            d = d*j;
        }
        cout<<d<<endl;
    }
    
    return 0;
}