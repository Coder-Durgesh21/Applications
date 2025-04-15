/*
    START
        Accept number from user
        Divide that number by 2
        If remainder is 0 then display Even
        otherwise display Odd
    STOP
*/

#include<stdio.h>
#include<stdbool.h>


bool CheckEven(int iNo)
{
    if((iNo % 2)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("Number is even \n");
    }
    else
    {
        printf("Number is odd \n");
    }

    return 0;
}