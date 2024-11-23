#include<stdio.h>
int main()
{
    char Arr[30];
    printf("enter string");
    scanf("%[^'\n']s",Arr);
    printf("Entered string is : %sn",Arr);
    return 0;
}
