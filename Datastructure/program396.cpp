#include<iostream>
using namespace std;
template<class T>
T Addition(T no1,T no2)
{
    T Ans=0;
    Ans=no1+no2;
    return Ans;
}
int main()
{
    int iRet=0;
    iRet=AdditionI(11,10);
    cout<<"Addition is "<<iRet<<"\n";
    return 0;
}