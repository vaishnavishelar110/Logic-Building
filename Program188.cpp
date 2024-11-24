#include<iostream>
using namespace std;

void DisplayFactor(int iNo)
{
    for(int i=1;i<=iNo/2;i++) // O(n/2)
    {
        if(iNo%i==0)
        {
            cout<<i<<"\n";
        }
    }
}



int main()
{
    int iValue=0;
    cout<<"enter no\n";
    cin>>iValue;
    DisplayFactor(iValue);
    return 0;
}