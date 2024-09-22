#include<iostream>
#include<climits>

using namespace std ;
 
int  main (){
    
    int   n ;
 
    cin>>n;
    for ( int i = 1 ; i <= n - (n-1) ; i++)  // 1
    {
        int j , k , l ;
        for (j = 1 ,k = 2 ,l = 3 ; j <= n*4 , k<= n*4  , l <= n*4 ; j+= 4 , k +=4 , l += 4)
        {
            cout<<j<<" "<<k<<" "<<l<<" "<<"PUM"<<endl;
            //printf("%d %d %d PUM\n", j , k , l);   // 1  2  3
        }                                          // 
    }
    return 0 ;
}