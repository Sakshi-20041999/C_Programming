////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Description   : Returns difference of small and capital letters
//  Input         : Character pointer
//  Output        : Integer
//  Author        : Sakshi Santosh Jadhav
//  Date          : 27/11/2025
//
////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int small = 0, capital = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
            small++;
        else if(*str >= 'A' && *str <= 'Z')
            capital++;

        str++;
    }
    return small - capital;
}

////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    iRet = Difference(arr);

    printf("Difference is: %d", iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Test Case
//
//  Input  : HeLLo
//  Output : Difference is: 1
//
//////////////////////////////////////////////////////////////////// 
