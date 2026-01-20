///////////////////////////////////////////////////////////
// Required Header Files
///////////////////////////////////////////////////////////
#include <stdio.h>

///////////////////////////////////////////////////////////
// Function Name : Mult
// Description   : Calculates multiplication of digits recursively
// Input         : Integer
// Output        : Integer
// Author        : Sakshi Jadhav
// Date          : 01/12/2025
///////////////////////////////////////////////////////////
int Mult(int iNo)
{
    if(iNo == 0)
    {
        return 1;
    }

    return (iNo % 10) * Mult(iNo / 10);
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Mult(iValue);

    printf("%d", iRet);

    return 0;
}

/*
Test Case:
Input  : 123
Output : 6
*/
