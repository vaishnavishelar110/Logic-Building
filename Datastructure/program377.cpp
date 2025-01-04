#include<iostream>
using namespace std;

typedef struct node 
{
int data=0;
struct node *next;

}NODE,*PNODE;

class queue
{
    public:
    PNODE head;
    int iCount;
    queue()
    {
        iCount=0;
        head=NULL;
    }
    void enqueue(int no)
    {
        PNODE temp=NULL;
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
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newn;
            
        }
        iCount++;
    }
    int dequeue() //DeleteFirst
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
        cout<<"NULL";
    }
    int Count()
    {
        return iCount;
    }

};
int main()
{
int iRet=0;
queue qobj;
qobj.enqueue(101);
qobj.enqueue(51);
qobj.enqueue(21);
qobj.enqueue(11);


qobj.Display();
int value=0;
value=qobj.dequeue();
cout<<"\npoped elemet is "<<value<<"\n";

qobj.Display();
iRet=qobj.Count();

cout<<"\nno elemet are "<<iRet<<"\n";
qobj.Display();
iRet=qobj.Count();
cout<<"\nno elemet are "<<iRet;
    return 0;
}