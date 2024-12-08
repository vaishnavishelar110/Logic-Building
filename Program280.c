#include<stdio.h>
int CountDigitsI(int iNo)
{
    int Digit=0,count=0;
while(iNo!=0)
{
    Digit=iNo%10;
    count++;
    iNo=iNo/10;
}     
    

return count;
       
    

}
int main()
{
    int iValue=0;
    
    printf("enter value\n");
    scanf("%d",&iValue);
    int iRet=CountDigitsI(iValue);
    printf("Number of digit are==%d\n",iRet);
    
    return 0;
}