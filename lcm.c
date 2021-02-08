#include <stdio.h>

int gcd(int, int);

int lcm(int, int);

int main()
{
    int a, b;
    printf("Enter two space separated numbers: ");
    scanf("%d%d",&a,&b);
    printf("The LCM of %d and %d is %d",a,b,lcm(a,b));
    return 0;
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if(a > b)
        return gcd(a%b,a);
    else
        return gcd(b%a,a);
}

int lcm(int a, int b)
{
    return (a*b)/gcd(a,b);
}
