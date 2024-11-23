#include<stdio.h>


void Update(char *str)
{
while(*str!='\0')
{
    if(*str=='a')
    {
        *str='d';
    }

    str++;
}
    

}
int main()
{
    char Arr[30];
    printf("enter string");
    scanf("%[^'\n']s",Arr);

    
    
    Update(Arr);
       printf("string after updation is :%s\n",Arr);
    
 
    
    return 0;
}
