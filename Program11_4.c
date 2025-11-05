#include <stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    if (iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        printf("Invalid range\n");
        return 0;
    }

    int iSum = 0;
    for (int i = iStart; i <= iEnd; i++)
    {
        if (i % 2 == 0)
            iSum += i;
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if (iRet != 0)
        printf("Addition is %d\n", iRet);

    return 0;
}
