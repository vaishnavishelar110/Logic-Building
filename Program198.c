#include<stdio.h>
void Display(char *str)
{
    while(*str!='\0')
    {
        printf("%c\n",*str);
        str++;
    }

}
/*
void DisplayR(char *str)
{
    printf("reverse string  is")
    
}*/
int main()
{

char Arr[30];
printf("enter string");
scanf("%[^'\n']s",Arr);
Display(Arr);
//DisplayR(Arr);


    return 0;
}