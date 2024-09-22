#include<stdio.h>
#include<math.h>

int  main (){

    int arr[10010];

    int i ,j,n;
    scanf("%d", &n);
    for ( i = 0 ; i < n-1 ; i++)
    {
        for ( i = 0 ; j < n - 1 ; j++)
        {
            if ( arr[j]> arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp ;

            }
        }

    }
    for ( i = 0 ; i < n ; i++)
    {
        printf("%d" , arr[i]);
    }
    printf("\n");

    return 0;
}