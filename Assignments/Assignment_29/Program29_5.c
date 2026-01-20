////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Displays continuous numbers from 1 to 9 repeatedly
//  Input         : Integer, Integer
//  Output        : Pattern
//  Author        : Sakshi Santosh Jadhav
//  Date          : 20/11/2025
//
////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int num = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", num);
            num++;
            if(num == 10)
            {
                num = 1;
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
//  Input  : 3 5
//  Output :
//  1 2 3 4 5
//  6 7 8 9 1
//  2 3 4 5 6
//
//////////////////////////////////////////////////////////////////// 
