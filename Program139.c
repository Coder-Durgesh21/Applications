#include<stdio.h>
#include<stdlib.h>

void Updator(int Arr[], int iSize)
{ 
   int i = 0;

   for(i = 0 ; i< iSize ; i++)
   {
        (Arr[i])++;
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

    Updator(Brr,iCount);

    printf("Data after updation is : \n");
    for(i = 0 ; i < iCount ; i++)
    {
        printf("%d\n",Brr[i]);
    }

    free(Brr);

    return 0;
   
}
//DL2*C=de!