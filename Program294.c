#include<stdio.h>
#include<stdlib.h>
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
    int *ptr=NULL;
    int iValue=0,i=0;
    printf("enter size\n");
    scanf("%d",&iValue);
    ptr=(int *)malloc(sizeof(int)*iValue);
      printf("enter Values\n");
    for(i=0;i<iValue;i++)
    {
        scanf("%d",&ptr[i]);
    }
    Display(ptr,iValue);
    
    return 0;
}