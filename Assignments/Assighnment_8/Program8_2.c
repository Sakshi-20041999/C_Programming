////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Displays number in words (0 to 9)
// Input         : Integer
// Output        : Text
// Author        : Sakshi Santosh Jadhav
// Date          : 7/11/2025
//
////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    if (iNo > 9)
    {
        printf("Invalid Number\n");
        return;
    }

    switch (iNo)
    {
        case 0: printf("Zero\n"); break;
        case 1: printf("One\n"); break;
        case 2: printf("Two\n"); break;
        case 3: printf("Three\n"); break;
        case 4: printf("Four\n"); break;
        case 5: printf("Five\n"); break;
        case 6: printf("Six\n"); break;
        case 7: printf("Seven\n"); break;
        case 8: printf("Eight\n"); break;
        case 9: printf("Nine\n"); break;
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

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Test Cases
//
// Input  : 5
// Output : Five
//
// Input  : -3
// Output : Three
//
// Input  : 12
// Output : Invalid Number
//
////////////////////////////////////////////////////////////////////
