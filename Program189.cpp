#include<iostream>
using namespace std;
class Number
{
    public:
    int iNo;
    Number(int A)
    {
        iNo=A;
    }
void DisplayFactor()
{
    for(int i=1;i<=iNo/2;i++) // O(n/2)
    {
        if(iNo%i==0)
        {
            cout<<i<<"\n";
        }
    }
}

};




int main()
{
    int iValue=0;
    cout<<"enter no\n";
    cin>>iValue;
    Number nobj(iValue);
    
   nobj.DisplayFactor();
    return 0;
}