#include <stdio.h>

int main()
{
    int n, i, j, k;
    printf("Enter the number of stairs required: ");
    scanf("%d",&n);
    printf("\n\n");
    for(i = 1; i <= n; i++)
    {
        for (j = n-i; j > 0; j--)
            printf("  ");
        for (k = 1; k <= i; k++)
            printf("01");
        printf("\n");
    }
    return 0;
}
