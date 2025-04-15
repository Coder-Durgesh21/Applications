#include<stdio.h>

void Display(int iNo)
{
    int iDigit = 0;

    printf("Value of iNo is : %d\n",iNo);

    iDigit =iNo % 10;
    printf("Digits is : %d\n",iDigit);
    printf("%d\n",iDigit);  //  1
    printf("Value of iNo is : %d\n",iNo);
    iNo = iNo / 10;  //  72

    iDigit =iNo % 10;
    printf("Digits is : %d\n",iDigit);
    printf("%d\n",iDigit);   //  2
    printf("Value of iNo is : %d\n",iNo);
    iNo = iNo / 10;  //  7

    iDigit =iNo % 10;
    printf("Digits is : %d\n",iDigit);
    printf("%d\n",iDigit);   //  7
    printf("Value of iNo is : %d\n",iNo);
    iNo = iNo / 10;  //  0
}

int main()
{
    int iValue = 721 ;

    //printf("Enter number :\n");
    //scanf("%d",&iValue);
    Display(iValue);

    return 0;
}    