#include<stdio.h>

void UpdateString(char *str)
{
    int iCnt = 0;

    for(iCnt = 0 ; str[iCnt] != '\0' ; iCnt++)
    {
        printf("%c\n",str[iCnt]);
    }
}

int main()
{
    char Arr[50];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    UpdateString(Arr);

    printf("Updated string is : %s\n",Arr);

    return 0;
}