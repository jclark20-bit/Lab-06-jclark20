#include <stdio.h>

int main(void)
{

    int choice;
    double value;

    do
    {
        printf("\nConversion Menu");
        printf("1.Minutes to Seconds\n");
        printf("2.Hours to Minutes\n");
        printf("3.feet to inches\n");
        printf("4.quit?\n");

        printf("whats your choice?: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("please enter your minutes: ");
            scanf("%lf", &value);
            printf("seconds = %.0f\n", value * 60);

        }
        else if (choice == 2)
        {
                       printf("please enter your hours: ");
            scanf("%lf", &value);
            printf("Minutes = %.0f\n", value * 60); 
        }
        else if (choice == 3)
        {
                        printf("please enter your feet: ");
            scanf("%lf", &value);
            printf("seconds = %.0f\n", value * 12);
        }
        else if (choice == 4)
        {
            printf("bye!\n");

        }
        else 
        {
            printf("invlalid Choice\n");

        }
    } while (choice != 4);

    return 0;
    

}