#include<stdio.h>
void Display(int iNo)
{
      
    while(iNo>=1)
    {
        printf("%d\n",iNo);
        iNo--;

       
    }

}
int main()
{
    int iValue=0;
    printf("inside main\n");
    printf("enter value\n");
    scanf("%d",&iValue);
    Display(iValue);
    printf("end of main\n");
    return 0;
}