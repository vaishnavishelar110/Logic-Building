#include<stdio.h>
void DisplayR(int iNo)
{
     static int i=1;
    if(i<=iNo)
    {
        printf("%d\n",i);
        i++;

       DisplayR(iNo);
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