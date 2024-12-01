#include<iostream>

using namespace std;
bool CHKBit(int iNo)
{
      int iResult=0;
       int mask=65536;
        iResult=iNo & mask;
    if(iResult==mask)
    {
     return true;
    }
    else
    {
     return false;
    } 

}
int main()
{

    int No=0;
   
  bool bRet=false;
    cout<<"enter Number t: \n";
    cin>>No;
    bRet=CHKBit(No);
    if(bRet==true)
    {
      cout<<" 17th bit is ON\n";
    }
    else
    {
     cout<<"17th bit is OF\n";
    } 
    
    

    return 0;
}