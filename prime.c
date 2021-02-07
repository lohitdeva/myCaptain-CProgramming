#include <stdio.h>

int num, flag = 0, i = 2;

void checkFactor(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    checkFactor(n);
    if (flag == 0)
        printf("%d is a prime number\n",n);
    else
        printf("%d is not a prime number\n",n);
    return 0;
}

void checkFactor(int n)
{
    if (i >= (n/2))
        return;

    if (n%i == 0)
    {
        flag = 1;
        return;
    }
    else
    {
        i++;
        checkFactor(n);
    }
}
