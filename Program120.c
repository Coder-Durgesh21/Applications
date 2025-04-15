#include<stdio.h>

int Addition(int Arr[] , int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int Brr[5]; 
    int iRet = 0;
    int iCnt = 0;

    printf("Enter the elements : \n");

    for(iCnt = 0 ; iCnt < 5 ; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Addition(Brr,5);
    printf("Addition is : %d\n",iRet);

    return 0;
}