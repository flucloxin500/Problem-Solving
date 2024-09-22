#include <bits/stdc++.h>

using namespace std ;
int main (){
 
    long long m[100010],i , n , s = 0;
 
    cin>>n;
 
    for ( i = 0 ; i <= n ; i++)
    {
        cin>>m[i];
    }
 
    for ( i = 0 ; i <= n ; i++)
    {
        s += m[i];
    }
 
    s = abs(s);
 
    cout<<s<<endl;
 
    
    return 0 ;
}