#include<stdio.h>

int Reverse(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iRev = (iRev * 10) + iDigit;
    }
    return iRev;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Reverse(iValue); 

    printf("Reverse number is : %d\n",iRet);

    return 0;
}