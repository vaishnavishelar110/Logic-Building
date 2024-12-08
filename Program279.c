#include<stdio.h>
int AdditionR(int iNo)
{
    static int iSum=0;
    static int iCnt=1;
      
    if(iCnt<=iNo)
    {
       
        iSum=iSum+iCnt;
        iCnt++;
        AdditionR(iNo);
    }
       printf("end of display\n"); 

return iSum;
       
    

}
int main()
{
    int iValue=0;
    printf("inside main\n");
    printf("enter value\n");
    scanf("%d",&iValue);
    int iRet=AdditionR(iValue);
    printf("Addition is equal==%d\n",iRet);
    printf("end of main\n");
    return 0;
}