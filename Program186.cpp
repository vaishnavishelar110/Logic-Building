#include<iostream>
using namespace std;

class Arithmatic
{
public:
int iValue1,iValue2;
Arithmatic(int A,int B)
{
    iValue1=A;
    iValue2=B;
}
int Add()
{
    int iResult=0;
    iResult=iValue1+iValue2;
    return iResult;
}

};


int main()
{
    int ino1=0,ino2=0,ians=0;
    cout<<"enter first\n";
    cin>>ino1;

     cout<<"enter second\n";
    cin>>ino2;
    Arithmatic aobj(ino1,ino2);
    ians=aobj.Add();
    cout<<"ans is"<<ians;
    return 0;
}