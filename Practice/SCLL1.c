#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;

};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE head,PPNODE tail,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    if((*head==NULL) && (*tail==NULL))
    {
        *head=newn;
        *tail=newn;
        //newn->next=head;
    }
    else{
        newn->next=*head;
        *head=newn;
    }
    
    (*tail)->next=*head;
}
void InsertLast(PPNODE head,PPNODE tail,int no){
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    if((*head==NULL) && (*tail==NULL))
    {
        *head=newn;
        *tail=newn;
        
    
    }
    else{
        (*tail)->next=newn;
        *tail=newn;
    }
    (*tail)->next=*head;
}
void DeleteFirst(PPNODE head,PPNODE tail)
{
    PNODE temp=NULL;
    if((*head==NULL)&& (*tail==NULL))
    {
     printf("empty\n");
     return;   
    }
    else if(*head==*tail)
    {
        free(*head);
        *head=NULL;
        *tail=NULL;
    }
    else{
         temp=*head;
        *head=(*head)->next;
        free(temp);
          (*tail)->next=*head;      
    }
  
}
void DeleteLast(PPNODE head,PPNODE tail)
{
    PNODE temp=NULL;
    if((*head==NULL)&& (*tail==NULL))
    {
     printf("empty\n");
     return;   
    }
    else if(*head==*tail)
    {
        free(*head);
        *head=NULL;
        *tail=NULL;
    }
    else{
        temp=*head;
        while(temp->next!=*tail)
        {
            temp=temp->next;
        }
        free(temp->next);
        *tail=temp;

        (*tail)->next=*head;
    }
    
}
void Display(PNODE head,PNODE tail)
{
    do
{
    printf("| %d |->",head->data);
    head=head->next;
}while((head!=tail->next));

}
int Count(PNODE head,PNODE tail){
int iCount=0;
do{
    iCount++;
    head=head->next;
}while(head!=tail->next);
return iCount;

}
void InsertAtPos(PPNODE head,PPNODE tail,int no,int iPos)
{
    int count=0;
    PNODE temp=NULL;
    PNODE newn=NULL;
    count=Count(*head,*tail);
    if(iPos<1 || iPos>count+1)
    {
        printf("Invalid pos\n");
        return;
    }
    if(iPos==1)
    {
        InsertFirst(head,tail,no);
    }
    else if(iPos==count+1)
    {
        InsertLast(head,tail,no);
    }
    else{
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=no;
        newn->next=NULL;
        temp=*head;
            for(int i=1;i<iPos-1;i++)
            {
                temp=temp->next;
            }
            newn->next=temp->next;
            temp->next=newn;
            (*tail)->next=*head;
            

    }
}
void DeleteAtPos(PPNODE head,PPNODE tail,int iPos)
{
    int count=0;
     PNODE temp=NULL;
    PNODE target=NULL;
    count=Count(*head,*tail);
    if(iPos<1 || iPos>count+1)
    {
        printf("Invalid pos\n");
        return;
    }
    if(iPos==1)
    {
        DeleteFirst(head,tail);
    }
    else if(iPos==count)
    {
        DeleteLast(head,tail);
    }
    else{
         temp=*head;
            for(int i=1;i<iPos-1;i++)
            {
                temp=temp->next;
            }
        target=temp->next;
        temp->next=target->next;
        free(target);
        (*tail)->next=*head;
    }
}

int main()
{
PNODE first=NULL;
PNODE last=NULL;
int iRet=0;
InsertFirst(&first,&last,51);
InsertFirst(&first,&last,21);
InsertFirst(&first,&last,11);

InsertLast(&first,&last,101);
InsertLast(&first,&last,111);
InsertAtPos(&first,&last,75,3);
//DeleteFirst(&first,&last);
//DeleteLast(&first,&last);
Display(first,last);
iRet=Count(first,last);
printf("\nnumber of elements are %d:",iRet);
DeleteAtPos(&first,&last,3);
//DeleteFirst(&first,&last);
//DeleteLast(&first,&last);
Display(first,last);
iRet=Count(first,last);
printf("\nnumber of elements are %d:",iRet);
    return 0;
}