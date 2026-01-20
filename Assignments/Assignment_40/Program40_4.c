#include<stdio.h>

///////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Display capital letters recursively
// Input         : Integer
// Output        : A B C ...
// Author        : Sakshi Jadhav
// Date          : 01/12/2025
///////////////////////////////////////////////////////////
void Display(int iNo)
{
    static char ch = 'A';

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
Output : A   B   C   D
*/
