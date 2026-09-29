#include <stdio.h> 

int main(void)
{
    int rows;
    int columns;

    printf("rows: ");
    scanf("%d", &rows);

    printf("coloumns:");
    scanf("%d", &columns);

    for (int row = 1; row <= rows; row++)
    {
        for (int column = 1; column <= columns; column++)
{
    printf("%d", row * column);
}
printf("\n");

    }
return 0;

}