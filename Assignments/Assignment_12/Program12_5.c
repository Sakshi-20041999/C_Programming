////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////
//
// Function Name :  CheckDivisibleByFive
// Description   :  Checks whether number is divisible by 5
// Input         :  Integer
// Output        :  Boolean
// Author        :  Sakshi Santosh Jadhav
//
////////////////////////////////////////////////////////////////////

bool CheckDivisibleByFive(int iNo)
{
    if(iNo % 5 == 0)
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
// Entry Point Function
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = CheckDivisibleByFive(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not divisible by 5\n");
    }

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Test Cases
//
// Input  : 25
// Output : Divisible by 5
//
// Input  : 13
// Output : Not divisible by 5
//
//////////////////////////////////////////////////////////////////// 
