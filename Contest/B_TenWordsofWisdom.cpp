#include <iostream>

using namespace std;
int main() 
{
    int a[50] , b[50]  ;
    int n , x;
    int i , j ;

    cin>>n;

    while(n--)
    {
        cin>>x;
        int max = -1 ;

        for ( i = 0 ; i < x ; i++)
        {
            cin>>a[i]>>b[i] ;
        }

        for ( i = 0 ; i < x ; i++)
        {
            if ( a[i] <= 10)
            {
                if ( b[i] > max)  // 30
                {
                    max = b[i] ;  // 30
                    j = i ;
                }
            }
        }

        cout<<j+1<<endl ;
    }

}
