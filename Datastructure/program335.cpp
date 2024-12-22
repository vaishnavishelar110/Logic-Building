#include<iostream>
using namespace std;

struct node
{
    int data;
    
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyLL
{
    public: 

        PNODE head;
        int iCount;
        SinglyLL()
        {
            head=NULL;
            iCount=0;
        }

        void InsertFirst(int no){
            PNODE newn=NULL;
            newn =new NODE;
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
        void InsertLast(int no){}
        void InsertAtPos(int no,int iPos){}
        void DeleteFirst(){}
        void DeleteLast(){}
        void DeleteAtPos(int iPos){}
        void Display()
        {
            PNODE temp=head;
            cout<<"elements of LL are\n";
            while(temp!=NULL)
            {
                cout<<"|"<<temp->data<<"| ->";
                temp=temp->next;
            }
            cout<<"NULL\n";
        }
        int Count(){
            return iCount;
        }     

};


int main()
{
    SinglyLL sobj;
    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);       
    int iRet=sobj.Count();
    cout<<"number of elements are"<<iRet<<"\n";
sobj.Display();
    return 0;
}