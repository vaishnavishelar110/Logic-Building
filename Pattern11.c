#include<stdio.h>
void Display(int row,int col)
{
  char ch='a';
  int Even=1;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
           if(i%2!=0)
           {
               
            printf("%c\t",ch);
            ch++;
            }
            else
            {
                printf("%d\t",Even);
                Even++;
            }
           
         
          
        }
        printf("\n");
        Even=1;
        ch='a';
        
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