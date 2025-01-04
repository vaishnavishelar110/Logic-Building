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

queue qobj1;

queue qobj2;
queue qobj3;

qobj1.enqueue(5);
qobj1.enqueue(7);
qobj1.enqueue(10);

qobj2.enqueue(2);
qobj2.enqueue(15);

qobj3.enqueue(23);
qobj3.enqueue(67);
qobj3.enqueue(75);
qobj3.enqueue(50);
    return 0;
}