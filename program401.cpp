#include<iostream>
using namespace std;
template<class T>
T Addition(T Arr[],int iSize)
{
    T Sum;
    for(int i=0;i<iSize;i++)
    {
        Sum=Sum+Arr[i];
    }
    
    return Sum;
}
int main()
{
    int Brr[]={10,20,30,40};
   int iRet=0;
   iRet=Addition(Brr,4);
   cout<<"Addition of int is: "<<iRet<<"\n";

    float Brr1[]={10.12f,20.52f,30.65f,40.59f};
   float fRet=0.0f;
   fRet=Addition(Brr1,4);
   cout<<"Addition of float is: "<<fRet<<"\n";

   double Brr2[]={10.12,20.52,30.65,40.59};
   double dRet=0.0;
   dRet=Addition(Brr2,4);
   cout<<"Addition is: "<<dRet<<"\n";
    return 0;
}