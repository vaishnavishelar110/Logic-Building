#include<stdio.h>
void Display(int Arr[],int iSize)
{
    for(int i=0;i<iSize;i++)
    {
        printf("%d\n",Arr[i]);
    }
}
int main()
{
    int iValue=0;
    int Brr[]={10,20,30,40,50};
    
    printf("enter size\n");
    scanf("%d",&iValue);
    Display(Brr,iValue);
    
    return 0;
}