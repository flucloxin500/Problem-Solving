#include <stdio.h>
int main() {
    int i,j,x,n;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        scanf("%d",&n); //4
        long long sum=0,k=1; //k=2
        for(j=1;j<=n;j++)
    {
        if(j==k) // j=2
        {
            sum-=k; //  sum = -1 -2 +3 -4
            k*=2; //k=8      2^3 =
        }
        else
        {
            sum+=j; //
        }

    }

    printf("%lld\n",sum);
    }
    return 0;

}