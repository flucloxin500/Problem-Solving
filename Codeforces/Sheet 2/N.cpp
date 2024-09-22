#include<iostream>
#include<climits>

using namespace std ;
int main()
{
    int i , n , x , j ;
    char w ;

    cin>>w;
    cin>>n;

    for ( i = 1 ; i <= n ; i++)
    {
        cin>>x;
        for ( j = 1 ; j <= x ; j++)
        {
            cout<<w;        
        }

        cout<<endl;
    }
    
    return 0;
}