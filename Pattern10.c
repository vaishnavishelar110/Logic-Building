#include<stdio.h>
void Display(int row,int col)
{
  int Even=2,Odd=1;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
           if(i%2!=0)
           {
               
            printf("%d\t",Even);
            Even=Even+2;
            }
            else
            {
                printf("%d\t",Odd);
                Odd=Odd+2;
            }
           
         
          
        }
        printf("\n");
        Even=2;
        Odd=1;
        
    }
}

int main()
{
    int iRow=0,iCol=0;
    printf("enter row");
    scanf("%d",&iRow);
     printf("enter col");
    scanf("%d",&iCol);
    Display(iRow,iCol);
    return 0;
}