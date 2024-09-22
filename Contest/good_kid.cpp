#include<bits/stdc++.h>

using namespace std ;
int  main (){

    int t , n ;
    int a[12];
    
    int i , j  ;

    cin>> t ;
    
        
    
    while(t--)
    {
        int min = 1000 ;
        int sum = 1 ;
        cin >> n ;

        for ( i = 0 ; i < n ; i++)
        {
            cin>>a[i];

            if ( a[i] < min )    // 4 3 2 3 4   
            {
                min = a[i] ;
            }  
        }

        min= min +1 ;


        for ( i = 0 ; i < n ; i++)
        {
            sum *= a[i];
        }
        
        cout<<sum<<endl ;
    }
    //cout<<min;

    
}
