////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplaySchedule
//  Description   : Displays exam time based on division
//  Input         : Character
//  Output        : Exam Schedule
//  Author        : Sakshi Santosh Jadhav
//  Date          : 27/11/2025
//
////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
    if(chDiv >= 'a' && chDiv <= 'z')
        chDiv = chDiv - 32;

    if(chDiv == 'A')
        printf("Your exam at 7 AM");
    else if(chDiv == 'B')
        printf("Your exam at 8.30 AM");
    else if(chDiv == 'C')
        printf("Your exam at 9.20 AM");
    else if(chDiv == 'D')
        printf("Your exam at 10.30 AM");
    else
        printf("Invalid Division");
}

////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter your division: ");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : A
//  Output : Your exam at 7 AM
//
//  Input  : c
//  Output : Your exam at 9.20 AM
//
////////////////////////////////////////////////////////////////////
