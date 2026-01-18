////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////
//
// Function Name : CheckEvenOdd
// Description   : Checks whether the number is even or odd
// Input         : Integer
// Output        : Boolean
// Author        : Sakshi Santosh Jadhav
// Date          : 7/11/2025
//
////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("It is Even number");
    }
    else
    {
        printf("It is Odd number");
    }

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Test Cases
//
// Input  : 12
// Output : It is Even number
//
// Input  : 13
// Output : It is Odd number
//
////////////////////////////////////////////////////////////////////
