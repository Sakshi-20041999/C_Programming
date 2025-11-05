#include <stdio.h>

void DisplayPattern(int iNo)
{
    for(int i = 1; i <= iNo; i++)
    {
        if(i % 2 == 0)
            printf("* ");
        else
            printf("$ ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayPattern(iValue);

    return 0;
}
