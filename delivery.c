#include <stdio.h>

int main(void)
{
    int stops;
    int time;
    int total = 0;
    int completed = 0;
    int quick = 0;
    int normal = 0;
    int longStops = 0;

    printf("How many stops are currently planned? ");
    scanf("%d", &stops);

    for (int i = 1; i <= stops; i++)
    {
        printf("Please enter the delivery time: ");
        scanf("%d", &time);

        if (time == -1)
        {
            continue;
        }

        if (time == 999)
        {
            break;
        }

        total = total + time;
        completed++;

        if (time < 10)
        {
            quick++;
        }
        else if (time <= 20)
        {
            normal++;
        }
        else
        {
            longStops++;
        }
    }

    printf("Quick stops: %d\n", quick);
    printf("Normal stops: %d\n", normal);
    printf("Long stops: %d\n", longStops);
    printf("Completed stops: %d\n", completed);
    printf("Total delivery time: %d\n", total);

    return 0;
}