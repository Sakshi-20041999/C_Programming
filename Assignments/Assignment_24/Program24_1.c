////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Maximum
//  Description   : Finds maximum element from array
//  Input         : Integer array, Integer
//  Output        : Integer
//  Author        : Sakshi Santosh Jadhav
//  Date          : 14/11/2025
//
////////////////////////////////////////////////////////////////////

int Maximum(int Arr[], int iLength)
{
    int i = 0, iMax = Arr[0];

    for (i = 1; i < iLength; i++)
    {
        if (Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
    }
    return iMax;
}

////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
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
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Maximum(p, iSize);
    printf("Largest Number is %d\n", iRet);

    free(p);
    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : 5
//           10 45 23 89 12
//  Output : Largest Number is 89
//
////////////////////////////////////////////////////////////////////  
