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
    int ino1=0,ino2=0,ians=0;
    cout<<"enter first\n";
    cin>>ino1;

     cout<<"enter second\n";
    cin>>ino2;

    ians=Add(ino1,ino2);
    cout<<"ans is"<<ians;
    return 0;
}