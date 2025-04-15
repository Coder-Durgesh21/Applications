#include<stdio.h>

void DisplayClass(float fPercentage)
{ 
    if((fPercentage >= 0.0) && (fPercentage <= 35.00))
    {
        printf("You are fail \n");
    }
    else if((fPercentage >= 35.00) && (fPercentage <= 50.00))
    {
        printf("You class is Pass class \n");
    }
    else if((fPercentage >= 50.00) && (fPercentage <= 60.00))
    {
        printf("You class is Second class \n");
    }
    else if((fPercentage >= 60.00) && (fPercentage <= 75.00))
    {
        printf("You class is First class \n");
    }
    else if((fPercentage >= 75.00) && (fPercentage <= 100.00))
    {
        printf("You class is First with Distinction \n");
    }
}

int main()
{
    float fValue = 0.0f;

    printf("Enter your Percentage : \n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}