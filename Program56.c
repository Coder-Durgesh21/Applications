#include<stdio.h>

int CountDigits(int iNo)
{
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iNo = iNo / 10;
        iCount++;
    }
    return iCount;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);
    printf("Count of Digits is : %d",iRet);

    return 0;
}