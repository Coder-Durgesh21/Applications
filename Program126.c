#include<stdio.h>
#include<stdlib.h>

void DisplayOdd(int Arr[] ,int iSize)
{
    int i = 0;

    printf("Odd Elements are : \n");
    for(i = 0 ; i < iSize ; i++)
    {
        if((Arr[i] % 2) != 0)
        {
            printf("%d\n",Arr[i]);
        }
    }
}

int main()
{
    int iCount = 0;
    int *Brr = NULL;
    int i = 0;

    printf("Enter the number of elements you want : \n");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    for(i = 0 ; i < iCount ; i++)
    {
        scanf("%d",&Brr[i]);
    }

    printf("Entered elements are : \n");
    for(i = 0 ; i < iCount ; i++)
    {
        printf("%d\n",Brr[i]);
    }

    DisplayOdd(Brr,iCount);

    free(Brr);

    return 0;
}