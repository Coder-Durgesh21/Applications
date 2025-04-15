#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[] , int iSize , int iNo)
{
    int i = 0;

    for(i = 0 ; i < iSize ; i++)
    {
        if(Arr[i] == iNo)
        {
            break;
        }
    }
    if(i == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iCount = 0;
    bool bRet = false;
    int i = 0;
    int *Brr = NULL;
    int iValue = 0;

    printf("Enter the number of elements you want : \n");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter elements : \n");
    for(i = 0 ; i < iCount ; i++)
    {
        scanf("%d",&Brr[i]);
    }

    printf("Enter the elements that you want to search : \n");
    scanf("%d",&iValue);

    bRet = Search(Brr,iCount,iValue);
    if(bRet == true)
    {
        printf("Element is present in Array : \n");
    }
    else
    {
        printf("Element is not present in Array : \n");
    }

    free(Brr);

    return 0;
}