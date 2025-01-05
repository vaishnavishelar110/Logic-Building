#include<iostream>
using namespace std;

double AdditionF(double Arr[],int iSize)
{
    double dSum=0.0;
    for(int i=0;i<iSize;i++)
    {
        dSum=dSum+Arr[i];
    }
    
    return dSum;
}
int main()
{
   double Brr[]={10.12,20.52,30.65,40.59};
   double iRet=0.0;
   iRet=AdditionF(Brr,4);
   cout<<"Addition is: "<<iRet<<"\n";
    return 0;
}