////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

////////////////////////////////////////////////////////////////////
//
// Function Name : Check
// Description   : Check whether given number is present in array
// Input         : Integer array, Integer, Integer
// Output        : Boolean
// Author        : Sakshi Santosh Jadhav
// Date          : 14/11/2025
//
////////////////////////////////////////////////////////////////////

BOOL Check(int Arr[], int iLength, int iNo)
{
    int i = 0;
    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}

////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the number to search: ");
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

    bRet = Check(p, iSize, iValue);

    if (bRet == TRUE)
        printf("Number is present\n");
    else
        printf("Number is not present\n");

    free(p);
    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Test Cases
//
// Input  : 5
//          10 20 30 40 50
//          30
// Output : Number is present
//
// Input  : 4
//          1 2 3 4
//          7
// Output : Number is not present
//
//////////////////////////////////////////////////////////////////// 
