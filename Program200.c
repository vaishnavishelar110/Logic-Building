#include<stdio.h>
void Display(char *str)
{
    char *start=str;
    char *end=str;
    char temp='\0';
    while(*end!='\0')
    {
        end++;
    }
    end--;
    while(start < end)
    {
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
        
    }
   

}

int main()
{

char Arr[30];
printf("enter string");
scanf("%[^'\n']s",Arr);
Display(Arr);

printf("string aftr reversal is: %s\n",Arr);


    return 0;
}