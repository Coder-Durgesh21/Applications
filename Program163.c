#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[50] ;
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlen(Arr);
    printf("String length is : %d\n",iRet);

    return 0;
}