#include<stdio.h>
void DisplayR(int iNo)
{
      
    if(iNo>=1)
    {
        printf("%d\n",iNo);
        iNo--;
        DisplayR(iNo);
        printf("end of Display\n");

       
    }

}
int main()
{
    int iValue=0;
    printf("inside main\n");
    printf("enter value\n");
    scanf("%d",&iValue);
    DisplayR(iValue);
    printf("end of main\n");
    return 0;
}