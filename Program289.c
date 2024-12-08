#include<stdio.h>
int CountCapital(char *str)
{
     static int count=0;
    if(*str!='\0')
    {
        if(*str>='A'&& *str<='Z')
        {
        count++;
        
    }
    str++;
        CountCapital(str);
    }
    return count;
}
int main()
{
    int iRet=0;
    char Arr[30];
    
    printf("enter string\n");
    scanf("%[^'\n']s",Arr);
    iRet=CountCapital(Arr);
    printf("capital character  is==%d\n",iRet);
    
    return 0;
}