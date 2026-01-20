#include<stdio.h>

///////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Display numbers from N to 1 recursively
// Input         : Integer
// Output        : N to 1
// Author        : Sakshi Jadhav
// Date          : 01/12/2025
///////////////////////////////////////////////////////////
void Display(int iNo)
{
    if(iNo >= 1)
    {
        printf("%d\t", iNo);
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
Input  : 5
Output : 5   4   3   2   1
*/
