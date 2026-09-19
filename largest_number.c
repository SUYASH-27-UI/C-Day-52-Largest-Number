#include <stdio.h>

int main()
{
    int n, number;
    int largest;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &largest);

    for (int i = 2; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number > largest)
        {
            largest = number;
        }
    }

    printf("Largest number = %d", largest);

    return 0;
}
