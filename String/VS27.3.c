#include<stdio.h>
void Reverse(char str[])
{
    int length=0;
    printf("***********\n");
    for(int i=0;str[i]!='\0';i++)
    {

            length++;
            
    }
        printf("%d",length);


         for(int i=length-1;str[i]>0;i--)
    {

         printf("%c",str[i]);  
          printf("\n");  
    }
    
    
    
}

int main()
{
    char Arr[20];
    int iRet=0;
    printf("enter String\n");
    scanf("%[^\n]C",&Arr);

    Reverse(Arr);
    //printf("total no of elemnets are:%d",iRet);




    return 0;
}