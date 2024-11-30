#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int Reverse(char str[],char st)
{
    
    int length=0;
    printf("***********\n");
    for(int i=0;str[i]!='\0';i++)
    {

            length++;
            
    }
        //printf("%d",length);


         for(int i=length-1;str[i]>0;i--)
    {

        if(str[i]==st)
        {
             
            
            return i+1;
            }
        
    }
    return 0;
    
}

int main()
{
    char Arr[20];
    int iRet=0;
    char ch='\0';
    printf("enter String\n");
    scanf("%[^'\n']s",Arr);
    printf("enter character:\n");
    
    scanf(" %c",&ch);

    iRet=Reverse(Arr,ch);
    printf("index of %c ==%d",ch,iRet);



    return 0;
}