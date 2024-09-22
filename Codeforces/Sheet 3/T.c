#include<bits/stdc++.h>

using namespace std;

int main() {
    int arr[100][100];
    int n , i , j , k;
    int sum = 0 , sum1 = 0 , s;

    cin>>n;
    for ( i = 0 ; i < n ; i++)
    {
        for ( j = 0 ; j < n ; j++)
        {
            cin>>arr[i][j];
        }
    }
    for ( i = n-1 , j = 0 ; i > 0 , j < n ; i-- , j++)
    {
        sum += arr[i][j];
    }
    for ( i = 0 , j = 0 ; i < n , j < n ; i++ , j++)
    {
        sum1 += arr[i][j];
    }
    s = abs(sum1-sum);

    cout<<s<<endl;
    
    return 0;
}