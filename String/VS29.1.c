#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool ChkChar(char *str,char st)
{

    bool flag=false;
   printf("%C",st);
    while(*str!='\0')
    {
printf("FGHJBVCFGHN ");
        if(*str==st)
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
    char Arr[20];
    bool bflag=false;
    char ch='\0';
    printf("enter String\n");
    scanf("%[^'\n']s",Arr);
    printf("enter character:\n");
    
    scanf(" %c",&ch);

    bflag=ChkChar(Arr,ch);
    if(bflag==true)
    {
        printf("present");
    }
    else{
                printf("absent");

    }




    return 0;
}