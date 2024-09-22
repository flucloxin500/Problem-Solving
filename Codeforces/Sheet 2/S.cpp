#include<iostream>
#include<climits>

using namespace std ;
 
int  main (){
    
    int   i ;
    int n , a , b ;
 
    cin>>n;   /// 5
 
    for(int j=1 ; j <= n ; j++)  // 1
    {
    
        cin>>a>>b;  // 10  4
        int min , max ;
        if ( a >= b )  // valid
        {
            max = a ;  // a = 10
            min = b ;  // b = 4
        }
        else 
        {
            max = b ;
            min = a ;
        }
        int sum = 0 ;
        for ( i = min+1  ; i <= max-1 ; i++)  // i =5  i cholbe 9 porjonto 
        {
            if ( i % 2 != 0)
            {
                sum += i; // 5+7+9
            }
        }
        cout<<sum<<endl;
 
        
    }
 
    
    
    return 0 ;
}