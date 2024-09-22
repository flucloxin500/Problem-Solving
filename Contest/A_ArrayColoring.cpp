#include <bits/stdc++.h>

using namespace std ;
int  main (){

    int n , x ;
    int i ;
    int arr[50];
    

    cin>>n;

    while (n--)
    {
        cin>>x ;
        int sum = 0 ;
        for ( i = 0 ; i < x ; i++)
        {
            cin>>arr[i];
            sum += arr[i];
        }

        if ((sum-arr[x-2]) % 2 == 0 && arr[x-2] % 2 == 0)
        {
            cout<<"YES"<<endl;
        }
        else if ((sum-arr[x-2]) % 2 != 0 && arr[x-2] % 2 != 0)
        {
            cout<<"YES"<<endl;
        }
        else if ( (sum-arr[x-2]) % 2 != 0 && arr[x-2] % 2 == 0)
        {
            cout<<"NO"<<endl;
        }
        else if ( (sum-arr[x-2]) % 2 == 0 && arr[x-2] % 2 != 0)
        {
            cout<<"NO"<<endl;
        }

    }
    
}