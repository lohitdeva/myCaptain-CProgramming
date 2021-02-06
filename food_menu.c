#include <stdio.h>

int main()
{
    int choice;
    printf("**************************************************\n");
    printf("\t\t\tMENU\n");
    printf("**************************************************\n\n");
    printf("ITEMS:\n\n");
    printf("1. Pasta\n2. French Fries\n3. Burger\n4. Sandwich\n5. Pizza\n\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    printf("\n\n");
    switch(choice)
    {
        case 1:
            printf("Food item - Pasta\nPrice - Rs. 179\n");
        break;
        case 2:
            printf("Food item - French Fries\nPrice - Rs. 99\n");
        break;
        case 3:
            printf("Food item - Burger\nPrice - Rs. 129\n");
        break;
        case 4:
            printf("Food item - Sandwich\nPrice - Rs. 149\n");
        break;
        case 5:
            printf("Food item - Pizza\nPrice - Rs. 239\n");
        break;
        default:
            printf("Food item does not exist on the menu\n");
    }
    return 0;
}
