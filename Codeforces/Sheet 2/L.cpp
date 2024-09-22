#include<iostream>
#include<climits>

using namespace std ;
int main()
{
    int a , b , A ,B , rem ;
    cin>>a>>b;
    A=a;
    B=b;
    while (B!=0){
        rem=A%B;
        A=B;
        B=rem;
    }
    cout<<A;
    return 0;
}