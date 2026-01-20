////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////
#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkChar
//  Description   : Checks whether character is present in string
//  Input         : Character array, Character
//  Output        : Boolean
//  Author        : Sakshi Santosh Jadhav
//  Date          : 27/11/2025
//
////////////////////////////////////////////////////////////////////

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////

int main()
{
    char arr[50];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    printf("Enter the character: ");
    getchar();
    scanf("%c", &cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
        printf("Character found");
    else
        printf("Character not found");

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Test Case
//
//  Input  : Marvellous
//           e
//  Output : Character found
//
////////////////////////////////////////////////////////////////////
