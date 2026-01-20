///////////////////////////////////////////////////////////
// Required Header Files
///////////////////////////////////////////////////////////
#include <stdio.h>

///////////////////////////////////////////////////////////
// Function Name : Fact
// Description   : Calculates factorial recursively
// Input         : Integer
// Output        : Integer
// Author        : Sakshi Jadhav
// Date          : 01/12/2025
///////////////////////////////////////////////////////////
int Fact(int iNo)
{
    if(iNo == 0)
    {
        return 1;
    }

    return iNo * Fact(iNo - 1);
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Fact(iValue);

    printf("%d", iRet);

    return 0;
}

/*
Test Case:
Input  : 5
Output : 120
*/
