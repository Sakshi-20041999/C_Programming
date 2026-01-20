////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : FirstChar
//  Description   : Finds first occurrence of character
//  Input         : Character array, Character
//  Output        : Integer
//  Author        : Sakshi Santosh Jadhav
//  Date          : 27/11/2025
//
////////////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int index = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return index;
        }
        str++;
        index++;
    }
    return -1;
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
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    printf("Enter the character: ");
    getchar();
    scanf("%c", &cValue);

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d", iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Test Case
//
//  Input  : Marvellous
//           a
//  Output : Character location is 1
//
////////////////////////////////////////////////////////////////////
