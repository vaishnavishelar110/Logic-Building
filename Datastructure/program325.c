#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
    struct node *prev;
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
    newn->prev=NULL;

    if(*head==NULL)
    {
        *head=newn;
    }
    else{
        newn->next=*head;
        (*head)->prev=newn;
        *head=newn;
    }
}
void InsertLast(PPNODE head,int no)
{
    PNODE temp=NULL;
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

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
void InserAtPos(PPNODE head,int no,int ipos)
{

}
void Display(PNODE head)
{
    printf("elements of the LL are:\n");

    printf("NULL <=>");
    while(head!=NULL)
    {
        printf("| %d | <=> ",head->data);
        head=head->next;
    }
     printf("NULL <=>");
}
int count(PNODE head)
{
int iCount=0;
while(head!=NULL)
{
    iCount++;
    head=head->next;
}
return iCount;
}
void DeleteFirst(PPNODE head)
{
    
    if(*head==NULL)
    {
        printf("LL is empty");
        return;
    }
    else if((*head)->next==NULL)
    {
        free(*head);
        *head=NULL;
    }
    else{
        *head=(*head)->next;
        free((*head)->prev);
        (*head)->prev=NULL;
    }
}
void DeleteLast(PPNODE head,int ipos)
{
    PNODE temp=NULL;
    if(*head==NULL)
    {
        printf("LL is empty");
        return;
    }
    else if((*head)->next==NULL)
    {
        free(*head);
        *head=NULL;


    }
    else{

    }
}
void DeleteAtPos(PPNODE head,int ipos)
{

}

int main()
{
    int iRet=0;
    PNODE first=NULL;
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertLast(&first,101);
    InsertLast(&first,111);
    InsertLast(&first,121);

DeleteFirst(&first);
    Display(first);
    iRet=count(first);
    printf("number of elements are:%d\n",iRet);
    return 0;
}