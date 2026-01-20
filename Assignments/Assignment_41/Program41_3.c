///////////////////////////////////////////////////////////
// Required Header Files
///////////////////////////////////////////////////////////
#include <stdio.h>

///////////////////////////////////////////////////////////
// Function Name : Strlen
// Description   : Calculates length of string recursively
// Input         : Character Array
// Output        : Integer
// Author        : Sakshi Jadhav
// Date          : 01/12/2025
///////////////////////////////////////////////////////////
int Strlen(char *str)
{
    if(*str == '\0')
    {
        return 0;
    }

    return 1 + Strlen(str + 1);
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%s", arr);

    iRet = Strlen(arr);

    printf("%d", iRet);

    return 0;
}

/*
Test Case:
Input  : Hello
Output : 5
*/
