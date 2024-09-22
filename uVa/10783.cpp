#include<iostream>
#include<climits>

using namespace std ;
int main()
{
    int n , a , b ;
    cin>>n;
    int i , j;

    for( j = 1 ; j <= n ; j++)
    {
        int sum = 0 ; 
        cin>>a;
        cin>>b;
        for ( i = a ; i <= b ; i++)
        {
            
            if ( i % 2 != 0)
            {
                sum += i ;
                
            }
        }

        cout<<"Case "<<j<<": "<<sum<<endl;
    }
    
    return 0;
}