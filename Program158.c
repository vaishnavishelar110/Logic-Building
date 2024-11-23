#include<stdio.h>

void Display(char *str)
{
    printf("Entered string is : %sn",str);
}
int main()
{
    char Arr[30];
    printf("enter string");
    scanf("%[^'\n']s",Arr);
    Display(Arr);

    
    return 0;
}
