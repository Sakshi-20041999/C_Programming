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
//  Function Name : ChkSmall
//  Description   : Checks whether character is small letter
//  Input         : Character
//  Output        : Boolean
//  Author        : Sakshi Santosh Jadhav
//  Date          : 27/11/2025
//
////////////////////////////////////////////////////////////////////

BOOL ChkSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
        printf("It is Small case Character");
    else
        printf("It is not a Small case Character");

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : g
//  Output : It is Small case Character
//
//  Input  : G
//  Output : It is not a Small case Character
//
////////////////////////////////////////////////////////////////////
