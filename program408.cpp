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
//template<class T>
class SinglyLL
{
    public: 

        PNODE head;
        int iCount;
        SinglyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        
        void InsertAtPos(int no,int iPos);
       
        void DeleteFirst();
       
        void DeleteLast();
        
        void DeleteAtPos(int iPos);
        void Display();
        
        int Count();     

};
 SinglyLL::SinglyLL()
        {
            head=NULL;
            iCount=0;
        }

        void SinglyLL::InsertFirst(int no){
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
        void SinglyLL::InsertLast(int no)
        {
            PNODE temp=NULL;
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
                temp=head;
                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=newn;

                
            }
            iCount++;
        }
        void SinglyLL::InsertAtPos(int no,int iPos)
        {
           
        }
        void SinglyLL::DeleteFirst()
        {
            PNODE temp=NULL;
            if(head==NULL)
            {
                cout<<"LL is empty";
                return;
            }
            else if(head->next==NULL){
                delete head;
                head=NULL;
                
            }
            else{
                temp=head;
                head=head->next;
                delete temp;

            }
            iCount--;
        }
        void SinglyLL::DeleteLast()
        {
            PNODE temp=NULL;
            if(head==NULL)
            {
                cout<<"LL is empty";
                return;
            }
            else if(head->next==NULL){
                delete head;
                head=NULL;
                
            }
            else{
                temp=head;
                while(temp->next->next!=NULL)
                {
                    temp=temp->next;
                }
                delete temp;
                temp->next=NULL;


            }
            iCount--;
        }
        void SinglyLL::DeleteAtPos(int iPos){}
        void SinglyLL::Display()
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
        int SinglyLL::Count(){
            return iCount;
        } 


int main()
{
    SinglyLL sobj;
    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);       
    int iRet=sobj.Count();
    cout<<"number of elements are"<<iRet<<"\n";
sobj.Display();
   sobj.InsertLast(121);
    sobj.InsertLast(111);
    sobj.DeleteFirst();
     iRet=sobj.Count();
     sobj.Display(); 
    cout<<"number of elements are"<<iRet<<"\n";
    sobj.DeleteLast();
     iRet=sobj.Count();
     sobj.Display(); 
    cout<<"number of elements are"<<iRet<<"\n";
    sobj.DeleteLast();
     iRet=sobj.Count();
     sobj.Display(); 
    cout<<"number of elements are"<<iRet<<"\n";

    return 0;
}