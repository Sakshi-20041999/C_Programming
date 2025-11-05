#include <stdio.h>

void Table(int iNo)
{
    int i = 0;

    // Handle negative numbers by converting them to positive
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Print the multiplication table
    for (i = 1; i <= 10; i++)
    {
        printf("%d\t", iNo * i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}
