#include<stdio.h>

///////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Display small letters recursively
// Input         : Integer
// Output        : a b c ...
// Author        : Sakshi Jadhav
// Date          : 01/12/2025
///////////////////////////////////////////////////////////
void Display(int iNo)
{
    static char ch = 'a';

    if(iNo > 0)
    {
        printf("%c\t", ch);
        ch++;
        Display(iNo - 1);
    }
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

/*
Test Case:
Input  : 4
Output : a   b   c   d
*/
