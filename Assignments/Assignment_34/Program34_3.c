////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Displays character pattern based on input
//  Input         : Character
//  Output        : Character Pattern
//  Author        : Sakshi Santosh Jadhav
//  Date          : 27/11/2025
//
////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    int i = 0;

    if(ch >= 'A' && ch <= 'Z')
    {
        for(i = ch; i <= 'Z'; i++)
        {
            printf("%c\t", i);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(i = ch; i >= 'a'; i--)
        {
            printf("%c\t", i);
        }
    }
}

////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : C
//  Output : C D E F ... Z
//
//  Input  : f
//  Output : f e d c b a
//
////////////////////////////////////////////////////////////////////
