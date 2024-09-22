#include<iostream>
#include<climits>

using namespace std ;
 
 
int  main (){
    
    int row , col , n ;
 
    cin>>n;
 
    for ( row = 1 ; row <= n ; row++)
    {
        for ( col = 1 ; col <= n - row ; col++)
        {
            //spaces
            cout<<" ";  
        }
        for ( col = 1 ; col <=2*row -1 ; col++)
        {
            //star
            cout<<"*";  
        }
        cout<<endl;
    }
    return 0 ;
}
