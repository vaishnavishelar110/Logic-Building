#include<iostream>
using namespace std;
void DisplayBinary(int No)
{
    int Digit=0;
    while(No!=0)
    {
        Digit=No%2;
        cout<<Digit;
        No=No/2;

    }
    cout<<"\n";

}
int main()
{

    int iValue=0;
    
cout<<"enter number:\n";
cin>>iValue;
DisplayBinary(iValue);
    
    return 0;
}