////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : CountEven
//  Description   : Counts number of even elements in array
//  Input         : Integer array, Integer
//  Output        : Integer
//  Author        : Sakshi Santosh Jadhav
//  Date          : 14/11/2025
//
////////////////////////////////////////////////////////////////////

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, iEvenCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
}

////////////////////////////////////////////////////////////////////
//
//  Entry point function
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
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

    iRet = CountEven(p,iSize);
    printf("Frequency of even numbers is: %d\n",iRet);

    free(p);
    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : 6
//           11 20 32 17 40 9
//  Output : Frequency of even numbers is: 3
//
//////////////////////////////////////////////////////////////////// 
