////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Display border and diagonal pattern
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
            if(i == 1 || i == iRow || j == 1 || j == iCol || i == j || (i + j) == (iCol + 1))
                printf("*\t");
            else
                printf("\t");
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
// Input  : 5 5
// Output :
// * * * * *
// * *   * *
// *   *   *
// * *   * *
// * * * * *
//
//////////////////////////////////////////////////////////////////// 
