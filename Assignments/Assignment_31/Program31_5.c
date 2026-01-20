////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Display right shifted number pattern
// Input         : Integer, Integer
// Output        : Pattern
// Author        : Sakshi Santosh Jadhav
// Date          : 20/11/2025
//
////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i, j;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(j < i)
                printf("\t");
            else
                printf("%d\t", j);
        }
        printf("\n");
    }
}

////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Test Case
//
// Input  : 4 4
// Output :
// 1 2 3 4
//   2 3 4
//     3 4
//       4
//
//////////////////////////////////////////////////////////////////// 
