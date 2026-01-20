////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
// Function Name : RangeSumEven
// Description   : Calculate summation of even numbers in range
// Input         : Integer, Integer
// Output        : Integer
// Author        : Sakshi Santosh Jadhav
// Date          : 21/11/2025
//
////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{
    int i = 0;
    int iSum = 0;

    if(iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        printf("Invalid range\n");
        return 0;
    }

    for(i = iStart; i <= iEnd; i++)
    {
        if(i % 2 == 0)
        {
            iSum = iSum + i;
        }
    }

    return iSum;
}

////////////////////////////////////////////////////////////////////
//
// Entry point function
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    printf("Addition is %d\n", iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Test Cases
//
// Input  : 1 10
// Output : 30
//
//////////////////////////////////////////////////////////////////// 
