#include<iostream>
using namespace std;

class Array{
    public:
    int *Arr;
    int iSize;
    Array(int length)
    {
        iSize=length;
        Arr=new int[iSize];
    }
    ~Array()
    {
        delete Arr;
    }
   void Accept()
   {
    int i=0;
    cout<<"enter the data\n";
    for(i=0;i<iSize;i++)
    {
        cin>>Arr[i];
    }
   }
    
   void Display()
   {
    int i=0;
    cout<<"entered elements are:\n";
    for(i=0;i<iSize;i++)
    {
        cout<<Arr[i]<<"\n";
    }
   }
};
int main()
{
Array aobj(5);
aobj.Accept();
aobj.Display();
    
    return 0;
}