////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
// Function Name : Multiply
// Description   : Multiplies three numbers (ignores zero)
// Input         : Integer, Integer, Integer
// Output        : Integer
// Author        : Sakshi Santosh Jadhav
// Date          : 20/11/2025
//
////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iResult = 1;

    if(iNo1 != 0)
    {
        iResult *= iNo1;
    }
    if(iNo2 != 0)
    {
        iResult *= iNo2;
    }
    if(iNo3 != 0)
    {
        iResult *= iNo3;
    }

    return iResult;
}

////////////////////////////////////////////////////////////////////
//
// Entry point Function
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter three numbers : ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("%d", iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Test Cases
//
// Input  : 12 0 2
// Output : 24
//
// Input  : 5 4 7
// Output : 140
//
////////////////////////////////////////////////////////////////////
