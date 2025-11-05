#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo; // convert negative to positive
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt <= iNo / 2)
        {
            printf("*\t");
        }
        else
        {
            printf("#\t");
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
