#include<iostream> 
using namespace std; 
int main() 
{ 
    int t,N,A,B,arr[100000],count; 
    cin>>t; 
    for(int x=1; x<=t; x++) 
    { 
        count=0; 
        cin>>N; 
        cin>>A>>B; 
        for(int i=0; i<N; i++) 
        { 
            cin>>arr[i]; 
        } 
        for(int i=0; i<N-1; i++) 
        { 
            if(arr[i]>=3 || arr[i]<=6) 
            { 
                for(int j=i+1; j<N; j++) 
                { 
                    if((arr[i]+arr[j])>=A && (arr[i]+arr[j])<=B) 
                    { 
                        count++; 
                    } 
                } 
            } 
        } 
        cout<<"Case "<<t<<": "<<count<<endl; 
 
    } 
 
}