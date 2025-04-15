/*Input : irow = 4
          icol = 4

 Output :  1
           1 2
           1 2 3
           1 2 3 4
*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
   int i = 0 , j = 0;

   if(iRow != iCol)
   {
        printf("Number of rows and columns should be same \n");
        return ;
   }

   for(i = 1 ; i <= iRow ; i++)  // OUTER
   {
        for(j = 1 ; j <= iCol ; j++)       //INNER
        {
            if(i >= j)  //LOWER TRIANGLE
            {
                printf("%d\t",j);
            }
        }
        printf("\n");
   }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);
   
    Display(iValue1,iValue2);

    return 0;

}    
