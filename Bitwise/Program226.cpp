#include<iostream>
using namespace std;

int onBit(int iNo,int iPos)
{
     int iMask=0x1;
    int iResult=0;
    iMask=iMask<<(iPos-1);
    

    
   
     iResult=iNo | iMask;
     return iResult;
     

}
int main()
{
         
    int iValue=0;
    int iRet=0,iLocation=0;
   

    cout<<"enter the number:\n";
    cin>>iValue;
    cout<<"enter the postion:\n";
    cin>>iLocation;

   iRet=onBit(iValue,iLocation);

    cout<<"Number after bit on is :"<<iRet<<"\n";  
   
    


    return 0;
}

