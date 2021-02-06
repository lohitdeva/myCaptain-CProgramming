#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two space separated numbers: ");
    scanf("%d",&a);
    scanf("%d",&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Swapping complete!\n");
    printf("The first number is %d and the second number is %d",a,b);
}
