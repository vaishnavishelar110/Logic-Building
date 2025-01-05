#include<iostream>
using namespace std;

class Array{
    public:
    float *Arr;
    int iSize;
    Array(int length);
    
    ~Array();
    
   void Accept();   
   void Display();
   float Addition();
};
  
    Array::Array(int length)
    {
        iSize=length;
        Arr=new float[iSize];
    }
    Array::~Array()
    {
        delete Arr;
    }
   void Array::Accept()
   {
    int i=0;
    cout<<"enter the data\n";
    for(i=0;i<iSize;i++)
    {
        cin>>Arr[i];
    }
   }
    
   void Array::Display()
   {
    int i=0;
    cout<<"entered elements are:\n";
    for(i=0;i<iSize;i++)
    {
        cout<<Arr[i]<<"\n";
    }
   }
   float Array::Addition()
   {
    float iSum=0.0f;
    for(int i=0;i<iSize;i++)
    {
        iSum=iSum+Arr[i];
    }
    return iSum;
   }
int main()
{
    float iRet=0.0f;
Array aobj(5);
aobj.Accept();
aobj.Display();
iRet=aobj.Addition();
cout<<"Addition is"<<iRet;
    
    return 0;
}