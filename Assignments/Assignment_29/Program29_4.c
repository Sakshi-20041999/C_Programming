////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Displays positive numbers in odd rows and negative in even rows
//  Input         : Integer, Integer
//  Output        : Pattern
//  Author        : Sakshi Santosh Jadhav
//  Date          : 20/11/2025
//
////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 1)
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", j);
            }
        }
        else
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", -j);
            }
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

    printf("Enter rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Test Case
//
//  Input  : 4 3
//  Output :
//  1 2 3
// -1 -2 -3
//  1 2 3
// -1 -2 -3
//
//////////////////////////////////////////////////////////////////// 
