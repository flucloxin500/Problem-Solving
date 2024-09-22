#include<iostream>
#include<climits>

using namespace std ;
int  main (){
    
    int n , a , b , rem  ;
    int  sum2 = 0 , i ;
 
    cin>>n>>a>>b;
 
    for ( i = 1 ; i <= n ; i++)
    {
        int x = i , sum = 0  ;
        while ( x > 0)  /// i = 3 ;
        {
            rem = x % 10 ; /// rem = 3
            sum += rem ;  /// sum = 5
            x /= 10 ;
        }
 
        if ( sum >= a && sum <= b )
        {
            sum2 += i ;  // 2
        }
    }

    cout<<sum2<<endl;
 
    //printf ( "%d\n" , sum2 ) ;
    return 0 ;
}
