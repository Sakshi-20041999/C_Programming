////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////
//
// Function Name : Range
// Description   : Display elements within given range
// Input         : Integer array, Integer, Integer, Integer
// Output        : Integer
// Author        : Sakshi Santosh Jadhav
// Date          : 14/11/2025
//
////////////////////////////////////////////////////////////////////

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int i = 0;
    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] >= iStart && Arr[i] <= iEnd)
        {
            printf("%d\t", Arr[i]);
        }
    }
}

////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iStart = 0, iEnd = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter start: ");
    scanf("%d", &iStart);

    printf("Enter end: ");
    scanf("%d", &iEnd);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter elements:\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    Range(p, iSize, iStart, iEnd);

    free(p);
    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Test Cases
//
// Input  : 6
//          10 25 30 15 40 20
//          15 30
// Output : 25 30 15 20
//
//////////////////////////////////////////////////////////////////// 
