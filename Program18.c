#include<stdio.h>

float CalculatePercentage(int Marks , int Total)
{
    auto float fPercentage = 0.0f;

    if((Marks < 0) || (Total < 0) || (Marks > Total))                  // Filter
    {
        printf("Invalid Input \n");
        return fPercentage;
    }


    fPercentage = (((float)Marks / (float)Total) * 100); 
    return fPercentage;
}

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto float fRet = 0.0f;

    printf("Enter marks obtained : \n");
    scanf("%d",&iValue1);

    printf("Enter total marks  : \n");
    scanf("%d",&iValue2);

    fRet = CalculatePercentage(iValue1,iValue2);
    printf("Your Percentage is : %f\n",fRet);

    return 0;
}