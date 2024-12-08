#include<stdio.h>
int CountDigitsR(int iNo)
{
    static int count=0;
if(iNo!=0)
{
    
    count++;
    iNo=iNo/10;
    CountDigitsR(iNo);
}     
    

return count;
       
    

}
int main()
{
    int iValue=0;
    
    printf("enter value\n");
    scanf("%d",&iValue);
    int iRet=CountDigitsR(iValue);
    printf("Number of digit are==%d\n",iRet);
    
    return 0;
}