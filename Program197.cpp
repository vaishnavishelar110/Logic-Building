#include<iostream>
using namespace std;

class Array
{
    public:
    int *Arr;
    int iSize;  

    Array(int A)
    {
        iSize=A;
        Arr=new int[iSize];

    }
    ~Array()
    {
        delete []Arr;
    }

    void Accept()
    {
        cout<<"enter the values\n";
        for(int i=0;i<iSize;i++) // logic (function)
        {
            cin>>Arr[i];
        }
    }
 void Display()
 {
    cout<<"values from the array are:\n";
    for(int i=0;i<iSize;i++)// logic function
    {
        
        cout<<Arr[i]<<"\n";
    }
 }
 void reverse()
 {
    int temp=0,iStart=0,iEnd=iSize-1;
    //cout<<"array after reversing\n";
     
        while(iStart<iEnd)
        {
        temp=Arr[iStart];
        Arr[iStart]=Arr[iEnd];
        Arr[iEnd]=temp;
        iStart++;
        iEnd--;
        
        }
        
        
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
     
     aobj.Accept();
    aobj.Display();
    aobj.reverse();
   cout<<" elements after reversal:\n";
   aobj.Display();
        return 0;
}
