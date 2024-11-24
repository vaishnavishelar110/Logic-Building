#include<iostream>
using namespace std;

void swap(int *p,int *q)
{
    int temp=0;
    temp=*p;
    *p=*q;
    *q=temp;

}
int main()
{

    int no1=0,no2=0;
cout<<"enter no1\n";
cin>>no1;

cout<<"enter no2\n";
cin>>no2;
swap(&no1,&no2);
cout<<"value of no1\n"<<no1;
cout<<"value of no2\n"<<no2;


}