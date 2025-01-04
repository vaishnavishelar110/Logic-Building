#include<iostream>
using namespace std;

typedef struct node 
{
int data=0;
struct node *next;

}NODE,*PNODE;

class stack
{
    public:
    PNODE head;
    int iCount;
    stack()
    {
        iCount=0;
        head=NULL;
    }
    void push(int no)
    {
        PNODE newn=NULL;
        newn=new NODE;
        newn->data=no;
        newn->next=NULL;
        if(head==NULL)
        {
            head=newn;
        }
        else
        {
            newn->next=head;
            head=newn;
        }
        iCount++;
    }
    int pop() //DeleteFirst
    {
        int no=-1;
        if(head==NULL)
        {
            cout<<"statck is empty\n";
            return -1;
        }
        else if(head->next==NULL)
        {
            no=head->data;
            delete head;
            head=NULL;
        }
        else
        {
        no=head->data;
        PNODE temp=head;
        head=temp->next;
        delete temp;
        }
        iCount--;
        return no;
    }
    void Display()
    {

        PNODE temp=head;
        while(temp!=NULL)
        {
            cout<<"|"<<temp->data<<"|->";
            temp=temp->next;

        }
    }
    int Count()
    {
        return iCount;
    }

};
int main()
{
stack sobj;
sobj.push(51);
sobj.push(21);
sobj.push(11);
sobj.push(1);

sobj.Display();
int value=0;
value=sobj.pop();
cout<<"\npoped elemet is "<<value<<"\n";
int iRet=0;
sobj.Display();
iRet=sobj.Count();
cout<<"\nno elemet are "<<iRet<<"\n";
    return 0;
}