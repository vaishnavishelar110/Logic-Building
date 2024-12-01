#include<iostream>
using namespace std;

int offBit(int iNo,int iPos)
{
     int iMask=oxffffffef;
    int iResult=0;
    
   
     iResult=iNo ^ iMask;
     

}
int main()
{
         
    int iValue=0;
    int iRet=0,iLocation=0;
   

    cout<<"enter the number:\n";
    cin>>iValue;
    cout<<"enter the postion:\n";
    cin>>iLocation;

   iRet=offBit(iValue,iLocation);

    cout<<"Number after bit toggle is :"<<iRet<<"\n";  
   
    


    return 0;
}

