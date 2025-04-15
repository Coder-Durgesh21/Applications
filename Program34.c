#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        printf("%d\n",iCnt);    
    }
}

int main()
{
    int Value = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    Display(Value);

    return 0;
}
