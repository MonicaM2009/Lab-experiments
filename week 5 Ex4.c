#include <stdio.h>

int main()
{
    float num1, num2, result;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("\n--- Calculator Menu ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            result = num1 + num2;
            printf("\nResult = %.2f", result);
            break;

        case 2:
            result = num1 - num2;
            printf("\nResult = %.2f", result);
            break;

        case 3:
            result = num1 * num2;
            printf("\nResult = %.2f", result);
            break;

        case 4:
            if(num2 == 0)
                printf("\nDivision by zero is not possible");
            else
            {
                result = num1 / num2;
                printf("\nResult = %.2f", result);
            }
            break;

        default:
            printf("\nInvalid option");
    }

    return 0;
}