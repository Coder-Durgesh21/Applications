#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{ 
   int i = 0;

   for(i = iSize-1 ; i >= 0 ; i--)
   {
        printf("%d\n",Arr[i]);
   }
}

int main()
{
    int iCount = 0 , i = 0;
    int *Brr = NULL;
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of elements that you want : \n");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    for(i = 0 ; i < iCount ; i++)
    {
        scanf("%d",&Brr[i]);
    }

    Display(Brr,iCount);

    free(Brr);

    return 0;
   
}
//DL2*C=de!x