#include<stdio.h>

int Addition(int ptr[] , int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        iSum = iSum + ptr[iCnt];
    }
    return iSum;
}

int main()
{
    int Arr[5]; 
    int iRet = 0;
    int iCnt = 0;

    printf("Enter the elements : \n");

    for(iCnt = 0 ; iCnt < 5 ; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    iRet = Addition(Arr,5);
    printf("Addition is : %d\n",iRet);

    return 0;
}