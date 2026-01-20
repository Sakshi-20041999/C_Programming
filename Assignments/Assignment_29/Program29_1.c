////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Displays pattern using numbers
//  Input         : Integer, Integer
//  Output        : Displays pattern on screen
//  Author        : Sakshi Santosh Jadhav
//  Date          : 20/11/2025
//
////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
}

////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
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
//  Test Cases
//
//  Input  : 3 4
//  Output :
//           1   2   3   4
//           1   2   3   4
//           1   2   3   4
//
////////////////////////////////////////////////////////////////////

