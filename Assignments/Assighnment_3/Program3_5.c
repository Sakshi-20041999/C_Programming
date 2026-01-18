////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkVowel
// Description   : Checks whether character is vowel or not
// Input         : Character
// Output        : Boolean
// Author        : Sakshi Santosh Jadhav
// Date          : 20/10/2025
//
////////////////////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char cValue)
{
    if(cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U' ||
       cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character: ");
    scanf(" %c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////
//
// Test Cases
//
// Input  : a
// Output : It is Vowel
//
// Input  : b
// Output : It is not Vowel
//
////////////////////////////////////////////////////////////////////////////////////
