////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Displays '*' for first half and '#' for second half
// Input         : Integer
// Output        : Pattern
// Author        : Sakshi Santosh Jadhav
// Date          : 21/11/2025
//
////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt <= iNo / 2)
        {
            printf("*\t");
        }
        else
        {
            printf("#\t");
        }
    }
    printf("\n");
}

////////////////////////////////////////////////////////////////////
//
// Entry point Function
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Test Cases
//
// Input  : 6
// Output : *   *   *   #   #   #
//
// Input  : -5
// Output : *   *   #   #   #
//
////////////////////////////////////////////////////////////////////
