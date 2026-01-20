////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Frequency
//  Description   : Counts frequency of given number
//  Input         : Integer array, Integer, Integer
//  Output        : Integer
//  Author        : Sakshi Santosh Jadhav
//  Date          : 14/11/2025
//
////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iFreq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
            iFreq++;
    }
    return iFreq;
}

////////////////////////////////////////////////////////////////////
//
//  Entry point function
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iValue = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    printf("Enter number to find frequency: ");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iSize,iValue);
    printf("Frequency of %d is: %d\n",iValue,iRet);

    free(p);
    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : 6
//           5
//           5 10 5 20 5 30
//  Output : Frequency of 5 is: 3
//
//////////////////////////////////////////////////////////////////// 
