#include<iostream>
using namespace std;





int main()
{
    int *Arr=NULL;
    int iLength=0;
    cout<<"enter number of elements that yo want to store:";
    cin>>iLength;
    Arr=new int[iLength];
    cout<<"enter elemets of arry\n";
    for(int i=1;i<=iLength;i++)
    {
        cin>>Arr[i];
    }
    cout<<"entered elements are:\n";
    for(int i=1;i<=iLength;i++)
    {
        
        cout<<Arr[i]<<"\n";
    }
    delete Arr;
        return 0;
}
