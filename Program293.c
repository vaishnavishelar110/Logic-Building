#include<stdio.h>
void Display(int Arr[],int iSize)
{
    static int i=0;
    if(i<iSize)
    {
        printf("%d\n",Arr[i]);
        i++;
        Display(Arr,iSize);
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