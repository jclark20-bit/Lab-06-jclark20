#include <stdio.h>

int main(void)
{
    int count;
    int value;
    int smallest;
    int largest;

    printf("How many values are there? ");
    scanf("%d", &count);

    printf("Please enter value 1: ");
    scanf("%d", &value);

    smallest = value;
    largest = value;

    for (int i = 2; i <= count; i++)
    {
        printf("Enter a value %d: ", i);
        scanf("%d", &value);

        if (value < smallest)
        {
            smallest = value;
        }

        if (value > largest)
        {
            largest = value;
        }
    }

    printf("Smallest value: %d\n", smallest);
    printf("Largest value: %d\n", largest);

    return 0;
}