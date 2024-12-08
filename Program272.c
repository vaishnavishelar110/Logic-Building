#include<stdio.h>
void DisplayR(int iNo)
{
     int i=1;
    while(i<=iNo)
    {
        printf("%d\n",i);
        i++;
       
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