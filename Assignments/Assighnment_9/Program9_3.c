////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////
//
// Function Name : EvenFactorial
// Description   : Calculates factorial of even numbers up to given number
// Input         : Integer
// Output        : Integer
// Author        : Sakshi Santosh Jadhav
// Date          : 21/11/2025
//
////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt <= iNo; iCnt += 2)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

////////////////////////////////////////////////////////////////////
//
// Entry point Function
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d\n", iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Test Cases
//
// Input  : 6
// Output : 48   (2 * 4 * 6)
//
// Input  : 5
// Output : 8    (2 * 4)
//
////////////////////////////////////////////////////////////////////
