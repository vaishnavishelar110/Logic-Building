#include<stdio.h>
#include<stdbool.h>

bool Count(char *str,char ch)

{
    bool flag=false;
    int count=0;
    while(*str!='\0')
        {
        if(*str==ch)
        {
            flag=true;
            break;
        }
        str++;
        
    }
    return flag;
    

}
int main()
{
    char Arr[30];
    char cValue='\0';
    bool bRet=false;
    printf("enter string");
    scanf("%[^'\n']s",Arr);

    printf("enter character:\n");
    scanf("%c",cValue);
    
    
    bRet=Count(Arr,cValue);
    if(bRet==true)
    {
   printf("presencet");
    }
    else
    {
           printf("absent")
           ;
    }
    
 
    
    return 0;
}
