#include <stdio.h>

int main(void)
{
    int code;
    int correctCode = 4321;
    int granted = 0;

    for (int attempt = 1; attempt <=4; attempt++)
    {
printf("enter the code: ");
scanf("%d", &code);

if (code == 0)
{
    break;

}
if (code < 0)
{
    printf("Invalid code.\n");
    continue;

}
if (code == correctCode)
{
    printf("access granted!\n");
    granted = 1;
    break;

}
    }
    if (granted == 0)

    {
printf("access denied!\n");

    }
    return 0;
    
}




