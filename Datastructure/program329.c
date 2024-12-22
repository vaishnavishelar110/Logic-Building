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
void DeleteLast(PPNODE head)
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
         temp=*head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
            temp->next=NULL;

    }
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
void InsertAtPos(PPNODE head,int no,int ipos)
{
    
    int countnode=0;
    PNODE newn=NULL;
    PNODE temp=NULL;
    countnode= count(*head);
    if(ipos<1 || ipos>countnode+1)
    {
        printf("invalid pos");
        return;

    }
    if(ipos==1)
    {
        InsertFirst(head,no);
    }
    else if(ipos== countnode+1)
    {
        InsertLast(head,no);
    }
    else{
        temp=*head;
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=no;
        for(int i=1;i<ipos-1;i++)
        {
            temp=temp->next;
            
        }
        
        newn->next=temp->next;
        temp->next->prev=newn;
        temp->next=newn;
        newn->prev=temp;


    }

}
void DeleteAtPos(PPNODE head,int ipos)
{
     PNODE target=NULL;
      PNODE temp=NULL;
int countnode=0;
    countnode = count(*head);
    if(ipos<1 || ipos>countnode+1)
    {
        printf("invalid pos");
        return;

    }
    if(ipos==1)
    {
        DeleteFirst(head);
    }
    else if(ipos== countnode)
    {
        DeleteLast(head);
    }
    else{
        temp=*head;

            for(int i=0;i<ipos-1;i++)
            {
                temp=temp->next;
            }
            target=temp->next;
            temp->next=target->next;
            temp->next->prev=temp;
            free(target);
    }
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

//DeleteFirst(&first);
  //  Display(first);
    //iRet=count(first);
    //printf("number of elements are:%d\n",iRet);

    //DeleteLast(&first);
    Display(first);
    iRet=count(first);
    printf("number of elements are:%d\n",iRet);
    InsertAtPos(&first,75,4);
    InsertAtPos(&first,175,5);
    DeleteAtPos(&first,1);
    Display(first);
    iRet=count(first);
    printf("number of elements are:%d\n",iRet);
    return 0;
}