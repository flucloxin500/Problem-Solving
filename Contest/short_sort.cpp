#include<iostream>
#include<climits>

using namespace std ;
int  main (){

    int n ;

    cin>> n ;
    
    string x[n];

    int i ;

    for ( i = 0 ; i < n ; i++)
    {
        cin>>x[i];

        if ( x[i] == "abc" ||
        x[i] == "acb" ||
        x[i] == "cba" ||
        x[i] == "bac")
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    
    
    return 0 ;
}
