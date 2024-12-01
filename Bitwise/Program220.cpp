#include<iostream>

using namespace std;
bool CHKBit(int iNo,int iPos)
{
    int iMask=0x1;
    iMask=iMask<<(iPos-1);
    if((iNo & iMask)==iMask)
    {
        return true;
    }
    else{
        return false;
    }

}
int main()
{

    int iValue=0;
    int iLocation=0;
    bool bRet=false;
    cout<<"enter the number:\n";
    cin>>iValue;

    cout<<"enter the nposition:\n";
    cin>>iLocation;
    bRet=CHKBit(iValue,iLocation);
    if(bRet==true)
    {
        cout<<"bit is on";

    }
    else
    {
                cout<<"bit is off";

    }
   
    


    return 0;
}