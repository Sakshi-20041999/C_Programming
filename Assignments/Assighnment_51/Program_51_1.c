///////////////////////////////////////////////////////////
// Required Header Files
///////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Displays given value multiple times
// Input         : Generic pointer, Count, Data type
// Author        : Sakshi Jadhav
// Date          : 06/01/2026
///////////////////////////////////////////////////////////
void Display(void *value, int count, char type)
{
    int i;
    for(i = 0; i < count; i++)
    {
        if(type == 'c')
            printf("%c\t", *(char*)value);
        else if(type == 'i')
            printf("%d\t", *(int*)value);
        else if(type == 'f')
            printf("%.2f\t", *(float*)value);
    }
    printf("\n");
}

///////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////
int main()
{
    char ch = 'M';
    int no = 11;
    float f = 3.7;

    Display(&ch, 7, 'c');
    Display(&no, 3, 'i');
    Display(&f, 6, 'f');

    return 0;
}

/*
Test Case:
Input  : 'M', 7, 'c'
Output : M M M M M M M
*/
