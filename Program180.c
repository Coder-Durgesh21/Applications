#include<stdio.h>
#include<stdbool.h>

int CheckOccurence(char *str , char ch)
{
    bool bFlag = false;
    int iCnt = 1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        iCnt++;
        str++;
    }
    if(bFlag == true)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
}

int main()
{
    char Arr[50];
    char cValue ;
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character that you want to search : \n");
    scanf(" %c",&cValue);

    iRet = CheckOccurence(Arr,cValue);

    if(iRet != -1 )
    {
        printf("Letter occurs at the position %d\n",iRet);
    }
    else
    {
        printf("There is no such letter");
    }

    return 0;
}