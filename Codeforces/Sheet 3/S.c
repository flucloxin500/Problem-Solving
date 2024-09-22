#include<bits/stdc++.h>

using namespace std;


int main (){

    long long m[100][100] ,row,col, j , i , f , x;
    
    cin>>row>>col;

    for ( i = 0 ; i < row ; i++)
    {
        for ( j = 0 ; j < col ; j++)
    {
        cin>>m[i][j];
    }
    }
    cin>>x;
    f = 0 ;
    for ( i = 0 ; i < row ; i++)
    {
        for ( j = 0 ; j < col ; j++)
    {
        if ( m[i][j] == x )
        {
            f = 1;
            break;
        }
    }
    }

    if ( f==1 )
    {
        cout<<"will not take number"<<endl;
    }
    else 
    {
        cout<<"will take number"<<endl;
    }

    return 0 ;
}
