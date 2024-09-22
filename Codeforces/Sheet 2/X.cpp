/*
     Bismillahir Rahmaneer Raheem
        Rabbi Zidni Ilmah
    Assalamu wala Manittaba Al huda
*/

#include<iostream>
#include<climits>

using namespace std ;
 

int main()
{ 
    int n;
    cin>>n;

    int x = n;
    int count = 0;

    while(x != 0)
    {
       int bin =  x % 2;
       if(bin == 1) count ++;
       x/=2;
    }
    printf("%d\n",count);
    int sum = 0;
    for(int i=1; i<=count-1; i++) {
         sum += (int)(pow(2,i));
    }

    cout<<sum+1<<endl;

    return 0;
}