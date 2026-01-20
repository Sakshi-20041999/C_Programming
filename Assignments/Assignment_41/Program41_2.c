///////////////////////////////////////////////////////////
// Required Header Files
///////////////////////////////////////////////////////////
#include <stdio.h>

///////////////////////////////////////////////////////////
// Function Name : Sum
// Description   : Calculates sum of digits recursively
// Input         : Integer
// Output        : Integer
// Author        : Sakshi Jadhav
// Date          : 01/12/2025
///////////////////////////////////////////////////////////
int Sum(int iNo)
{
    if(iNo == 0)
    {
        return 0;
    }

    return (iNo % 10) + Sum(iNo / 10);
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Sum(iValue);

    printf("%d", iRet);

    return 0;
}

/*
Test Case:
Input  : 123
Output : 6
*/
