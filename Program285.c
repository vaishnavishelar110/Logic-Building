#include<stdio.h>
int CountEvenDigitsR(int iNo)
{
     static int iCount=0;
      int iDigit=0;
    if(iNo!=0)
{
    iDigit=iNo%10;
    if(iDigit%2==0)
    {
        iCount++;
    }
    iNo=iNo/10;
    
    CountEvenDigitsR(iNo);
}     
    

return iCount;
       
    

}
int main()
{
    int iValue=0;
    
    printf("enter value\n");
    scanf("%d",&iValue);
    int iRet=CountEvenDigitsR(iValue);
    printf("count of digit are==%d\n",iRet);
    
    return 0;
}