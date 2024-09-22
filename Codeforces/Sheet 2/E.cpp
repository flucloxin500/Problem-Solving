#include<iostream>
#include<climits>

using namespace std ;
 
int main (){
 
    int n,i,x,mx = -2;
    cin>>n;
 
    for ( i = 1; i <= n ; i++)
    {
        cin>>x;
 
        if ( x > mx)
        {
            mx = x;
 
        }
 
    }
    cout<<mx<<endl;
 
    return 0;
}