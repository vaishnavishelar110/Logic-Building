#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int Count(char *str,char st)
{

   int countx=0;
    for(int i=(*str!='\0')
    {

        if(*str==st)
        {
             
            countx++;
            break;
            }
            else{
                return -1;
            }
        str++;
        countx++;
    }
  return countx;
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

    iRet=Count(Arr,ch);
    printf("index of %c ==%d",ch,iRet);



    return 0;
}