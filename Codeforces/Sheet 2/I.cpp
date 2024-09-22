#include<iostream>
#include<climits>

using namespace std ;
int main (){
 
    int x , rem, sum = 0 , temp  ;
    cin>>x;
 
    temp = x ;
 
    while ( temp != 0 )
    {
        rem = temp % 10 ;
        sum = sum * 10 + rem ;
        temp = temp / 10 ;
    }
 
    if ( x == sum)
    {
        cout<<sum<<endl<<"YES";
       //printf("%d\nYES", sum); 
    }
    else
    {
        cout<<sum<<endl<<"NO";
    }
    return 0 ;
}