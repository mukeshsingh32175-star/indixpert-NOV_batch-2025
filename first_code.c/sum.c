#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int multiplication(int a, int b)
{
    return a * b;
}
int divison(int a, int b)
{
    return a / b;
}
int subteaction(int a, int b)
{

    return a - b;
}

int main()
{
    do
    {

        int first_number, second_number, choice;
        ;

        printf("\nenter the first number: ");
        scanf("%d", &first_number);
        printf("\nenter the secodn number: ");
        scanf("%d", &second_number);
        printf("\n1.sum\n");
        printf("\n2.multiplication\n");
        printf("\n3.division\n");
        printf("\n4.subtraction\n");
        printf("\n5.exit\n");

        printf("enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("the sum is : %d", sum(first_number, second_number));
        }
        if (choice == 2)
        {
            printf("the multiplication is : %d", multiplication(first_number, second_number));
        }
        if (choice == 3)
        {
            printf("the division is : %d", divison(first_number, second_number));
        }
        else if (first_number == 0 || second_number == 0)
        {
            printf("error:division by zero is not allwoled");
        }

        if (choice == 4)
        {
            printf("the subtraction is : %d", subteaction(first_number, second_number));
        }
        if (choice == 5)
        {
            break;
        }

    } while (1);

    return 0;
}