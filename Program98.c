/*Input : irow = 3
          icol = 4

 Output :  1 2 3 4 
           1 2 3 4 
           1 2 3 4 
*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0;
    int j = 0;

    for( i = 1 ; i <= iRow ; i++)   //OUTER
    {
        for(j = 1 ; j <= iCol ; j++)    //INNER
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter number of rows : ");
    scanf("%d",&iNo1);

    printf("Enter number of cloumns : ");
    scanf("%d",&iNo2);

    Display(iNo1,iNo2);
    
    return 0;
}