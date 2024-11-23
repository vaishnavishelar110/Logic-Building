#include<stdio.h>
#include<string.h>


int main()
{
    char Arr[30];
    printf("enter string");
    scanf("%[^'\n']s",Arr);
    int iRet=0;
    iRet=strlen(Arr);
    
    printf("string length is : %d\n",iRet);
    
    return 0;
}
