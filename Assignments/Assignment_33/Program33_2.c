////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkCapital
//  Description   : Checks whether character is capital letter
//  Input         : Character
//  Output        : Boolean
//  Author        : Sakshi Santosh Jadhav
//  Date          : 27/11/2025
//
////////////////////////////////////////////////////////////////////

BOOL ChkCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        return TRUE;
    else
        return FALSE;
}

////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character: ");
    scanf("%c", &cValue);

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
        printf("It is Capital Character");
    else
        printf("It is not a Capital Character");

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : Z
//  Output : It is Capital Character
//
//  Input  : a
//  Output : It is not a Capital Character
//
////////////////////////////////////////////////////////////////////
