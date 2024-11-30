#include<stdio.h>
int CountCapital(char *str)
{
    int count=0;
    printf("***********");
    while(*str!='\0')
    {

        if(*str>=65 && *str<=89)
        {
            count++;

        }
        str++;
    }
    return count;
}

int main()
{
    char Arr[20];
    int iRet=0;
    printf("enter String");
    scanf("%[^\n]C",&Arr);

    iRet=CountCapital(Arr);
    printf("total no of elemnets are:%d",iRet);




    return 0;
}