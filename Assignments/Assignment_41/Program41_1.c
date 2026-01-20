///////////////////////////////////////////////////////////
// Required Header Files
///////////////////////////////////////////////////////////
#include <stdio.h>

///////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Displays number and * recursively
// Input         : Integer
// Output        : Pattern
// Author        : Sakshi Jadhav
// Date          : 01/12/2025
///////////////////////////////////////////////////////////
void Display(int iNo)
{
    if(iNo > 0)
    {
        printf("%d\t*\t", iNo);
        Display(iNo - 1);
    }
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

/*
Test Case:
Input  : 3
Output : 3 * 2 * 1 *
*/
