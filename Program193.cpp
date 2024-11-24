#include<iostream>
using namespace std;

class Array
{
    public:
    int *Arr=NULL;
    int iSize=0;  
    int count=0

Array(int A)
    {
        iSize=A;
        Arr=new int[iSize];

    }

 void Accept()
 {
     for(int i=1;i<=iSize;i++) // logic (function)
    {
        cin>>Arr[i];
    }
 }
 void Display()
 {
    cout<<"entered elements are:\n";
    for(int i=1;i<=iSize;i++)// logic function
    {
        
        cout<<Arr[i]<<"\n";
    }
 }
 int CountEven()
 {
    for(int i=0;i<iSize;i++)
    {
        if(Arr[i]%2==0)
        {
            count++;
        }
    }
    return count;
 }
    ~Array()
    {
        delete []Arr;
    }

};



int main()
{
     // data (characteristics)
    int iLength=0;
    cout<<"enter number of elements that yo want to store:";
    cin>>iLength;
     // resource allocation
   
    Array aobj(iLength);
     cout<<"enter elemets of arry\n";
     aobj.Accept();
    aobj.Display();
    int iRet=0;
    iRet=aobj.CountEven();
cout<<"even elements are:"<<iRet;
   
        return 0;
}
