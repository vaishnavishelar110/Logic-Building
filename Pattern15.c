#include<stdio.h>
void Display(int row,int col)
{
   int count=1;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            
            printf("%d\t",count);
            count=count+1;
            
           
        }
        printf("\n");
        
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