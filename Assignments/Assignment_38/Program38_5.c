////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
// Function Name : StrCpyToggle
// Description   : Copies string and toggles character case
// Input         : Character pointer, Character pointer
// Output        : Modified destination string
// Author        : Sakshi Santosh Jadhav
// Date          : 27/11/2025
//
////////////////////////////////////////////////////////////////////

void StrCpyToggle(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
            *dest = *src + 32;
        else if(*src >= 'a' && *src <= 'z')
            *dest = *src - 32;
        else
            *dest = *src;

        src++;
        dest++;
    }
    *dest = '\0';
}

////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
////////////////////////////////////////////////////////////////////

int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];

    StrCpyToggle(arr, brr);

    printf("%s", brr);
    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Test Cases
//
// Input  : "Marvellous Python 2"
// Output : "mARVELLOUS pYTHON 2"
//
//////////////////////////////////////////////////////////////////// 
