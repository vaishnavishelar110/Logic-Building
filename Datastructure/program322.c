#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
    struct node *prev;   //$
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head,int no)
{
PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));
newn->data=no;
newn->next=NULL;
newn->prev=NULL;   //$
if(*head==NULL)
{
*head=newn;
}
else{
    newn->next=*head;
    (*head)->prev=newn; //$
    *head=newn;
    
    
}
}
void InsertLast(PPNODE head,int no)
{
PNODE newn=NULL;
PNODE temp=NULL;
newn=(PNODE)malloc(sizeof(NODE));
newn->data=no;
newn->next=NULL;
newn->prev=NULL;   //$
if(*head==NULL)
{
*head=newn;
}
else{
    temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newn;
    newn->prev=temp;

        
}
}
void Display(PNODE head)
{
    printf("elements of linkedlist are \n");
    while(head!=NULL)
    {
        printf("| %d | <=> ",head->data);
        head=head->next;
    }
    printf("NULL");
    

}
int Count(PNODE head){
int count=0;
while(head!=NULL)
    {
      count++;
        head=head->next;
    }
    return count;
}
int main()
{

    PNODE first=NULL;
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertFirst(&first,101);
    InsertFirst(&first,111);
    Display(first);
    int iRet=Count(first);
    printf("elements are %d ",iRet);
    return 0;
}
