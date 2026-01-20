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
//  Function Name : ChkVowel
//  Description   : Checks whether string contains vowel
//  Input         : Character pointer
//  Output        : Boolean
//  Author        : Sakshi Santosh Jadhav
//  Date          : 27/11/2025
//
////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u' ||
           *str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U')
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
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
        printf("Contains Vowel");
    else
        printf("No Vowel Found");

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Test Case
//
//  Input  : Sky
//  Output : No Vowel Found
//
//////////////////////////////////////////////////////////////////// 
