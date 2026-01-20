////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
// Function Name : Difference
// Description   : Returns difference between sum of even and odd elements
// Input         : Integer array, Integer
// Output        : Integer
// Author        : Sakshi Santosh Jadhav
// Date          : 14/11/2025
//
////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
    int i = 0, iSumEven = 0, iSumOdd = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iSumEven = iSumEven + Arr[i];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[i];
        }
    }
    return iSumEven - iSumOdd;
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
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);
    printf("Result is %d\n",iRet);

    free(p);
    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Test Cases
//
// Input  : 6
//          10 3 5 6 2 7
// Output : Result is 3
//
//////////////////////////////////////////////////////////////////// 
