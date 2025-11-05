#include <stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    // Loop through all numbers less than iNo
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)   // if not a factor
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}
