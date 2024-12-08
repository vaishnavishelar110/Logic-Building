#include<stdio.h>
int CountCapital(char *str)
{
      int count=0;
    while(*str!='\0')
    {
        if(*str>='A'&& *str<='Z')
        {
        count++;
        
    }
    
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