////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : DigitsSum
//  Description   : Calculates sum of digits of each number
//  Input         : Integer array, Integer
//  Output        : Displays integer sums
//  Author        : Sakshi Santosh Jadhav
//  Date          : 14/11/2025
//
////////////////////////////////////////////////////////////////////

void DigitsSum(int Arr[], int iLength)
{
    int i = 0, temp = 0, sum = 0;

    for (i = 0; i < iLength; i++)
    {
        temp = Arr[i];
        sum = 0;

        while (temp != 0)
        {
            sum += (temp % 10);
            temp = temp / 10;
        }
        printf("%d\t", sum);
    }
}

////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    printf("Summation of digits:\n");
    DigitsSum(p, iSize);

    free(p);
    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : 4
//           123 45 7 89
//  Output : 6   9   7   17
//
////////////////////////////////////////////////////////////////////  
