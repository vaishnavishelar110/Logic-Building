#include<stdio.h>


int Countspace(char *str)

{
    int count=0;
    while(*str!='\0')
        {
        if(*str>=65 && *str<=91)
        {
            count++;
        }
        str++;
        
    }
    return count;

}
int main()
{
    char Arr[30];
    printf("enter string");
    scanf("%[^'\n']s",Arr);
    int iRet=0;
    iRet=Countspace(Arr);
    
    printf("no off capitals are : %d\n",iRet);
    
    return 0;
}
