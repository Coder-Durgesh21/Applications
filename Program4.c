//Problem Statement : Accept 2 numbers from user and perform its addition

#include<stdio.h>

int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f;
    float fResult = 0.0f;

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter second number : \n");
    scanf("%f",&fValue2);

    fResult = fValue1 + fValue2;

    printf("Addition is : %f\n",fResult);

    return 0;
}