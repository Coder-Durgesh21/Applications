#include<stdio.h>
#include<stdbool.h>

bool CheckOccurence(char *str,char ch)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if((*str == ch))
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[100];
    bool bRet = false;
    char cValue ;

    printf("Enter string : \n");
    scanf("%[^'\n]s",Arr);

    printf("Enter the character that you want to search : \n");
    scanf(" %c",&cValue);

    bRet =  CheckOccurence(Arr,cValue);
     
    if(bRet == true)
    {
        printf("character present in string");
    }
    else
    {
        printf("character absent in string");
    }

    return 0;
}

