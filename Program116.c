#include<stdio.h>

void Display(int *ptr , int iSize)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++, ptr++)
    {
        printf("%d\n",*ptr);
    }
}

int main()
{
    int Arr[5] = {10,20,30,40,50};

    Display(Arr,5);

    return 0;
}