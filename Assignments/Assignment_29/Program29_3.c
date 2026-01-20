////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Displays alphabets on odd rows and numbers on even rows
//  Input         : Integer, Integer
//  Output        : Pattern
//  Author        : Sakshi Santosh Jadhav
//  Date          : 20/11/2025
//
////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 1)
        {
            ch = 'a';
            for(j = 1; j <= iCol; j++)
            {
                printf("%c\t", ch);
                ch++;
            }
        }
        else
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", j);
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
//  Input  : 3 4
//  Output :
//  a b c d
//  1 2 3 4
//  a b c d
//
//////////////////////////////////////////////////////////////////// 
