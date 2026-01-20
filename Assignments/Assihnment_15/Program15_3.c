////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
// Function Name :  CountRange
// Description   :  Counts digits greater than 3 and less than 7
// Input         :  Integer
// Output        :  Integer
// Author        :  Sakshi Santosh Jadhav
//
////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit > 3) && (iDigit < 7))
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("Count of digits between 3 and 7: %d\n",iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
// Test Cases
//
// Input  : 35872
// Output : 3
//
// Input  : 987
// Output : 0
//
//////////////////////////////////////////////////////////////////// 
