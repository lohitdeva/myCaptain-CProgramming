#include <stdio.h>

int sumOfDigits(int);

int main()
{
    int n, sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum = sumOfDigits(n);
    printf("The sum of the digits is: %d\n",sum);
    return 0;
}

int sumOfDigits(int num)
{
    if (num == 0)
        return 0;
    else
        return (num%10) + sumOfDigits(num/10);
}
