#include<iostream>
using namespace std;
int Add(int no1,int no2)
{
int result=0;
result=no1+no2;
    return result;
}
int main()
{
    int ino1=10,ino2=20,ians=0;
    ians=Add(ino1,ino2);
    cout<<"ans is"<<ians;
    return 0;
}