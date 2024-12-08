#include<stdio.h>
int Addition(int iNo)
{
    int iSum=0;
    int iCnt=1;
      
    while(iCnt<=iNo)
    {
       
        iSum=iSum+iCnt;
        iCnt++;
    }
        

return iSum;
       
    

}
int main()
{
    int iValue=0;
    printf("inside main\n");
    printf("enter value\n");
    scanf("%d",&iValue);
    int iRet=Addition(iValue);
    printf("Addition is equal==%d\n",iRet);
    printf("end of main\n");
    return 0;
}