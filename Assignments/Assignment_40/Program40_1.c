///////////////////////////////////////////////////////////
// Header File
///////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Display * recursively
// Input         : Integer
// Output        : * *
// Author        : Sakshi Jadhav
// Date          : 01/12/2025
///////////////////////////////////////////////////////////
void Display(int iNo)
{
    if(iNo > 0)
    {
        printf("*\t");
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
Output : *   *   *   *   *
*/
