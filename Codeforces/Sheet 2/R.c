#include<iostream>
#include<climits>

using namespace std ;
int  main (){
    
    int   i ;
    int n , a , b ;
    
    
    while(1)  // 1
    {
    
        cin>>a>>b;  /// 5  2
 
        if ( a <= 0 || b <= 0)  
        {
            break;
        }
        int min , max ;
        if ( a >= b )   
        {
            max = a ;  // a = 5
            min = b ;  // b = 2
        }
        else 
        {
            max = b ;
            min = a ;
        }
        int sum = 0 ;
        for ( i = min  ; i <= max ; i++)  
        {
            sum += i ;
           cout<<i<<" ";
           
        }
        cout<<"sum ="<<sum<<endl;
        //printf("sum =%d\n", sum );
        
 
        
    }
 
    
    
    return 0 ;
}
