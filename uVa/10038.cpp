#include <bits/stdc++.h>

using namespace std ;

int  main (){
    int n ;
    cin>>n;
    int seq[n],store[n];
    int i , cnt = 0 , cnt2 = 0 , cnt3;

    for ( i = 0 ; i < n ; i++)
    {
        cin>>seq[i];
    
    }
    for ( i = 0 ; i < n-1 ; i++)    /// 1 4 2 3
    {
        store[i] = abs(seq[i]-seq[i+1]) ;
        cnt++ ;
     }

    for ( i = 0 ; i < n-1 ; i++)
    {
       if ( store[i] > store[i+1])   // 3 2 1
       {
        cnt2++ ;
       }
    
    }
    cnt3 = cnt2+1 ;

   

    if ( cnt == cnt3)
    {
        cout<<"Jolly"<<endl;
    }
    else 
    {
        cout<<"Not jolly"<<endl;
    }
    

    
}