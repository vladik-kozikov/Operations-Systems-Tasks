#include <stdio.h>
#include <string.h>

int main()
{

    int n;

    printf("Please input a num of rows: ");
    scanf("%d",&n);

    for(int i=1;i<n+1;i++){
        for(int j = n-i; j>-1; j--)
            printf(" ");

        for(int k = 2*i-1; k>0; k--)
            printf("*");

        printf("\n");
    }

    return 0;
}
