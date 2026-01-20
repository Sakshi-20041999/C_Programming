////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////
//
// Function Name : Product
// Description   : Calculate product of odd elements
// Input         : Integer array, Integer
// Output        : Integer
// Author        : Sakshi Santosh Jadhav
// Date          : 14/11/2025
//
////////////////////////////////////////////////////////////////////

int Product(int Arr[], int iLength)
{
    int i = 0, iProd = 1;
    int flag = 0;

    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] % 2 != 0)
        {
            iProd = iProd * Arr[i];
            flag = 1;
        }
    }

    if (flag == 0)
        return 0;
    else
        return iProd;
}

////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

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

    iRet = Product(p, iSize);
    printf("Product is %d\n", iRet);

    free(p);
    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Test Cases
//
// Input  : 5
//          2 3 4 5 6
// Output : Product is 15
//
// Input  : 3
//          2 4 6
// Output : Product is 0
//
//////////////////////////////////////////////////////////////////// 
