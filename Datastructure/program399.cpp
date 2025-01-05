#include<iostream>
using namespace std;

float AdditionF(float Arr[],int iSize)
{
    float fSum=0.0f;
    for(int i=0;i<iSize;i++)
    {
        fSum=fSum+Arr[i];
    }
    
    return fSum;
}
int main()
{
   float Brr[]={10.12f,20.52f,30.65f,40.59f};
   float iRet=0.0f;
   iRet=AdditionF(Brr,4);
   cout<<"Addition is: "<<iRet<<"\n";
    return 0;
}