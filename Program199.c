#include<stdio.h>
void Display(char *str)
{
    while(*str!='\0')
    {
        printf("%c\n",*str);
        str++;
    }

}
void DisplayR(char *str)
{
    char *p=str;
    printf("reverse string  is:\n");
    while(*p!='\0')
    {
        p++;
    }
    p--;
    while(p>=str)
    {
        printf("%c\n",*p);
        p--;
    }
    
}
int main()
{

char Arr[30];
printf("enter string");
scanf("%[^'\n']s",Arr);
Display(Arr);
DisplayR(Arr);


    return 0;
}