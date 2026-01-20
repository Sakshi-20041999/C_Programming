#include<stdio.h>

///////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Display numbers from 1 to N recursively
// Input         : Integer
// Output        : 1 2 3 ...
// Author        : Sakshi Jadhav
// Date          : 01/12/2025
///////////////////////////////////////////////////////////
void Display(int iNo)
{
    static int i = 1;

    if(i <= iNo)
    {
        printf("%d\t", i);
        i++;
        Display(iNo);
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
Input  : 5
Output : 1   2   3   4   5
*/
