////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
// Function Name :  CountDiff
// Description   :  Returns difference between sum of even and odd digits
// Input         :  Integer
// Output        :  Integer
// Author        :  Sakshi Santosh Jadhav
//
////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0, iEvenSum = 0, iOddSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }
        iNo = iNo / 10;
    }
    return (iEvenSum - iOddSum);
}

////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Difference between even and odd digit sums: %d\n",iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Test Cases
//
// Input  : 2395
// Output : -15
//
// Input  : 8642
// Output : 20
//
//////////////////////////////////////////////////////////////////// 
