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
//  Function Name : ChkSpecial
//  Description   : Checks whether character is special
//  Input         : Character
//  Output        : Boolean
//  Author        : Sakshi Santosh Jadhav
//  Date          : 27/11/2025
//
////////////////////////////////////////////////////////////////////

BOOL ChkSpecial(char ch)
{
    if(ch=='!' || ch=='@' || ch=='#' || ch=='$' ||
       ch=='%' || ch=='^' || ch=='&' || ch=='*')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
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
    BOOL bRet = FALSE;

    printf("Enter the character: ");
    scanf("%c", &cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
        printf("It is special Character");
    else
        printf("It is not a special Character");

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : @
//  Output : It is special Character
//
//  Input  : A
//  Output : It is not a special Character
//
////////////////////////////////////////////////////////////////////
