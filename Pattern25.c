#include<stdio.h>
void Display(int row,int col)
{
    
   
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            
            
                printf(" *\t");
                
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