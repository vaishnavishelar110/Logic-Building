#include<stdio.h>


int StrlenX(char *str)

{
    int count=0;
    while(*str!='\0')
    {
        str++;
        count++;
    }
    return count;

}
int main()
{
    char Arr[30];
    printf("enter string");
    scanf("%[^'\n']s",Arr);
    int iRet=0;
    iRet=StrlenX(Arr);
    
    printf("string length is : %d\n",iRet);
    
    return 0;
}
