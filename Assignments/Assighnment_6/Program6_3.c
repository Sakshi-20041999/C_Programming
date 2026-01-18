////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////
//
// Function Name : CheckEqual
// Description   : Checks whether two numbers are equal
// Input         : Integer, Integer
// Output        : Boolean
// Author        : Sakshi Santosh Jadhav
// Date          : 20/11/2025
//
////////////////////////////////////////////////////////////////////

bool CheckEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////////
//
// Entry point Function
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Enter first number : ");
    scanf("%d", &iValue1);

    printf("Enter second number : ");
    scanf("%d", &iValue2);

    bRet = CheckEqual(iValue1, iValue2);

    if(bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Test Cases
//
// Input  : 10 10
// Output : Equal
//
// Input  : 10 20
// Output : Not Equal
//
////////////////////////////////////////////////////////////////////
