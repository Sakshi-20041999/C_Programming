////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplayEven
// Description   : Display even numbers in given range
// Input         : Integer, Integer
// Output        : Displays even numbers
// Author        : Sakshi Santosh Jadhav
// Date          : 21/11/2025
//
////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
    int i = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for(i = iStart; i <= iEnd; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}

////////////////////////////////////////////////////////////////////
//
// Entry point function
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Test Cases
//
// Input  : 3 10
// Output : 4 6 8 10
//
//////////////////////////////////////////////////////////////////// 
