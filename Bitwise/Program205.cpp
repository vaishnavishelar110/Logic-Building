#include<iostream>

using namespace std;

int main()
{

    int No=0;
    int mask=2;
    int iResult=0;
    cout<<"enter Number t: \n";
    cin>>No;
    iResult=No & mask;
    if(iResult==mask)
    {
      cout<<"Second bit is ON\n";
    }
    else
    {
     cout<<"Second bit is OF\n";
    } 
    
    

    return 0;
}