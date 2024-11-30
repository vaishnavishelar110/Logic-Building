#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void Reverse(char str[])
{
    int temp=0,length=0;
    int start=0;
     for(int i=0;str[i]!='\0';i++)
    {

            length++;
            
    }
    int end=length-1;
    while(start<end)
    {
        

        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
    printf(str);
    
}

int main()
{
    char Arr[20];
    char ch='\0';
    printf("enter String\n");
    scanf("%[^'\n']s",Arr);
    
    Reverse(Arr);
    



    return 0;
}