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
            cout<<" ";//col/row also   
        }
        for ( col = 1 ; col <=2*row -1 ; col++)
        {
            //star
            cout<<"*";//col/row also   
        }
        printf("\n");
    }
    for ( row = n ; row >= 1 ; row--)
    {
        for ( col = 1 ; col <= n - row ; col++)
        {
            //spaces
            cout<<" ";//col/row also   
        }
        for ( col = 1 ; col <=2*row -1 ; col++)
        {
            //star
            cout<<"*";//col/row also   
        }
        cout<<endl;
    }
    return 0 ;
}