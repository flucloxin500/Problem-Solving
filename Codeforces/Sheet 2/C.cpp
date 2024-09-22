#include<iostream>
#include<climits>

using namespace std ;
int main (){
 
    int n,i,x,a=0,b=0,c=0,d=0;
    cin>>n;
 
    for (i = 1 ; i <= n ; i++)
    {
        cin>>x;
 
        if ( x % 2 == 0 || x == 0)
        {
            a++;
        }
        if ( x % 2 != 0)
        {
            b++;
        }
        if ( x > 0)
        {
            c++;
        }
        if ( x < 0)
        {
            d++;
        }
 
    }
    cout<<"Even: "<<a<<endl;
    //printf("Even: %d\n", a);
    cout<<"Odd: "<<b<<endl;
    //printf("Odd: %d\n", b);
    cout<<"Positive: "<<c<<endl;
    //printf("Positive: %d\n", c);
    cout<<"Negative: "<<d<<endl;
    //printf("Negative: %d\n", d);
 
    return 0;
}