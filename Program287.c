#include<stdio.h>
int strlenX(char *str)
{
     static int count=0;
    if(*str!='\0')
    {
        count++;
        str++;
        strlenX(str);
    }
    return count;
}
int main()
{
    int iRet=0;
    char Arr[30];
    
    printf("enter string\n");
    scanf("%[^'\n']s",Arr);
    iRet=strlenX(Arr);
    printf("string length is==%d\n",iRet);
    
    return 0;
}