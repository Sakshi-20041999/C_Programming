////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description   : Checks whether number 11 is present
//  Input         : Integer array, Integer
//  Output        : Boolean
//  Author        : Sakshi Santosh Jadhav
//  Date          : 14/11/2025
//
////////////////////////////////////////////////////////////////////

bool Check(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
            return true;
    }
    return false;
}

////////////////////////////////////////////////////////////////////
//
//  Entry point function
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;
    bool bRet = false;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize);

    if(bRet == true)
        printf("11 is present\n");
    else
        printf("11 is absent\n");

    free(p);
    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : 6
//           10 11 12 13 14 15
//  Output : 11 is present
//
//////////////////////////////////////////////////////////////////// 
