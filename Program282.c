#include<stdio.h>
int SumDigitsI(int iNo)
{
     int iSum=0;
while(iNo!=0)
{
    iSum=iSum+(iNo%10);
    iNo=iNo/10;
    
}     
    

return iSum;
       
    

}
int main()
{
    int iValue=0;
    
    printf("enter value\n");
    scanf("%d",&iValue);
    int iRet=SumDigitsI(iValue);
    printf("sum of digit are==%d\n",iRet);
    
    return 0;
}