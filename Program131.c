#include<stdio.h>
#include<stdlib.h>

int CheckDivisible(int Arr[] , int iSize)
{
    int i = 0;
    int iCnt = 0;

    for(i = 0 ; i < iSize ; i++)
    {
        if((Arr[i] % 5) == 0)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int iCount = 0;
    int iRet = 0;
    int i = 0;
    int *Brr = NULL;

    printf("Enter the number of elements you want : \n");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter elements : \n");
    for(i = 0 ; i < iCount ; i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet = CheckDivisible(Brr,iCount);
    printf("Count of elements divisible by 5 : %d\n",iRet);

    free(Brr);

    return 0;
}