////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Digits
//  Description   : Displays 3-digit numbers from array
//  Input         : Integer array, Integer
//  Output        : Displays integers
//  Author        : Sakshi Santosh Jadhav
//  Date          : 14/11/2025
//
////////////////////////////////////////////////////////////////////

void Digits(int Arr[], int iLength)
{
    int i = 0, temp = 0, count = 0;

    for (i = 0; i < iLength; i++)
    {
        temp = Arr[i];
        count = 0;

        while (temp != 0)
        {
            temp = temp / 10;
            count++;
        }

        if (count == 3)
        {
            printf("%d\t", Arr[i]);
        }
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

    printf("3-digit numbers are:\n");
    Digits(p, iSize);

    free(p);
    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : 6
//           10 123 45 999 7 456
//  Output : 123   999   456
//
////////////////////////////////////////////////////////////////////  
