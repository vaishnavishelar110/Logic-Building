#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
     struct node *prev;


};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

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
    newn->next=NULL;
    newn->data=no;
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
void DeleteFirst(PPNODE head)
{
    PNODE temp=NULL;
    if(*head==NULL)
    {
     printf("empty\n");
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
void DeleteLast(PPNODE head)
{
    PNODE temp=NULL;
  
    if(*head==NULL)
    {
        printf("LL is empty\n");
        return;
    }
    else if((*head)->next==NULL)
    {
        free(*head);
        head=NULL;
    }
    else{
          temp=*head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
        free(temp->next);
        temp->next=NULL;
    }
}

void Display(PNODE head){
    if(head==NULL)
{
    printf("empty\n");
    return;
}
else{
    while(head!=NULL)
    {
        printf("| %d |",head->data);
        head=head->next;
    }
    printf("NULL\n");
}
}
int Count(PNODE head){
   int iCount=0;
    
    while(head!=NULL)
    {
        head=head->next;
        iCount++;
    }

return iCount;;
}
void InsertAtPos(PPNODE head,int no,int iPos)
{
    int count=0;
    PNODE temp=NULL;
    PNODE newn=NULL;
    count=Count(*head);
    if((iPos<1) || (iPos>count+1))
    {
        printf("invalid pos\n");
        return;
    }
    if(iPos==1)
    {
        InsertFirst(head,no);
    }
    else if(iPos==count+1)
    {
        InsertLast(head,no);
    }
    else{
        temp=*head;
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=no;
        //newn->next=NULL;
        //newn->prev=NULL;
        for(int i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next->prev=newn;
        temp->next=newn;
        newn->prev=temp;
    }
}
void DeleteAtPos(PPNODE head,int iPos)
{
     int count=0;
     PNODE temp=NULL;
     PNODE target=NULL;
    count=Count(*head);
    if((iPos<1) || (iPos>count+1))
    {
        printf("invalid pos\n");
        return;
    }
    if(iPos==1)
    {
        DeleteFirst(head);
    }
    else if(iPos==count)
    {
        DeleteLast(head);
    }
    else{
        
        temp=*head;
        for(int i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        
        target=temp->next;
        temp->next=target->next;
        target->next->prev=temp;
        free(target);
        //temp->next=temp->next->next;
        //temp->next-next-prev=temp;
        //free(temp->next);
    }
}
int main()
{
PNODE first=NULL;
int iRet=0;
InsertFirst(&first,51);
InsertFirst(&first,21);
InsertFirst(&first,11);
Display(first);
//DeleteFirst(&first);
InsertAtPos(&first,75,3);
Display(first);
DeleteAtPos(&first,3);
Display(first);
iRet=Count(first);
printf("number of elemets are: %d",iRet);
    return 0;
}