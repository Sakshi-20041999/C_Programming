////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////
//
// Function Name : FirstOcc
// Description   : Find first occurrence of number in array
// Input         : Integer array, Integer, Integer
// Output        : Integer
// Author        : Sakshi Santosh Jadhav
// Date          : 14/11/2025
//
////////////////////////////////////////////////////////////////////

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int i = 0;
    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] == iNo)
        {
            return i;
        }
    }
    return -1;
}

////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter number to search: ");
    scanf("%d", &iValue);

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

    iRet = FirstOcc(p, iSize, iValue);

    if (iRet == -1)
        printf("There is no such number\n");
    else
        printf("First occurrence at index %d\n", iRet);

    free(p);
    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Test Cases
//
// Input  : 6
//          10 20 30 20 40 50
//          20
// Output : First occurrence at index 1
//
//////////////////////////////////////////////////////////////////// 
