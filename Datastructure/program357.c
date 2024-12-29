#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
void InsertFirst(PPNODE head,PPNODE tail,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
   
    if((*head==NULL) && (*tail==NULL)){
        printf("LL is empty\n");
        *head=newn;
        *tail=newn;
        
    }
    else
    {
        newn->next=*head;
        *head=newn;
         
    }
    (*tail)->next=*head;

}
void InsertLast(PPNODE head,PPNODE tail,int no)
{
      PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
  if((*head==NULL) && (*tail==NULL)){
        printf("LL is empty\n");
        *head=newn;
        *tail=newn;
        
    }
    else
    {
        
        (*tail)->next=newn;
        *tail=newn;
       
    }
    (*tail)->next=*head;
   
}

void DeleteFirst(PPNODE head,PPNODE tail)
{

    if(*head==NULL && *tail==NULL)
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
        
        (*head)=(*head)->next;
        free((*tail)->next);
        (*tail)->next=*head;
    }
}
void DeleteLast(PPNODE head,PPNODE tail)
{
    PNODE temp=NULL;
   if(*head==NULL && *tail==NULL)
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

int Count(PNODE head,PNODE tail)
{
    if(head==NULL && tail==NULL)
    {
        return 0;
    }
    int iCnt=0;
do{

    iCnt++;
        head=head->next;
    }while(head!=tail->next);

}
void Display(PNODE head,PNODE tail){
    if(head==NULL && tail ==NULL)
    {
        printf("empty\n");
        return;
    }
    printf("\nelements of linkedlist are:\n");
    do{

        printf("| %d | ->",head->data);
        head=head->next;
    }while(head!=tail->next);
}
void InsertAtPos(PPNODE head,PPNODE tail,int no,int iPos)
{
    PNODE newn=NULL;
    PNODE temp=NULL;
    int i=0;
    int iCount=0;
    iCount=Count(*head,*tail);

   if(iPos<1 || iPos>iCount+1)
   {
    printf("invalid pos\n");
    return;
   } 
   if(iPos==1)
   {
    InsertFirst(head,tail,no);
   }
   else if(iPos==iCount+1)

    {
    InsertLast(head,tail,no);
    }
    else{
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=no;
        newn->next=NULL;
        temp=*head;
        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
        
    }}
void DeleteAtPos(PPNODE head,PPNODE tail,int iPos)
{
    int i=0;
    PNODE temp=NULL;
    PNODE target=NULL;
    int iCount=0;
    iCount=Count(*head,*tail);

   if(iPos<1 || iPos>iCount+1)
   {
    printf("invalid pos\n");
    return;
   } 
   if(iPos==1)
   {
    DeleteFirst(head,tail);
   }
   else if(iPos==iCount)

    {
    DeleteLast(head,tail);
    }
    else{
       
        temp=*head;
        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        target=temp->next;
        temp->next=target->next;
        free(target);
        
    }
    
}
int main()
{

int iRet=0;
PNODE first=NULL;
PNODE last=NULL;
Display(first,last);
InsertFirst(&first,&last,51);
InsertFirst(&first,&last,21);
InsertFirst(&first,&last,11);

InsertLast(&first,&last,101);
InsertLast(&first,&last,111);
Display(first,last);
InsertAtPos(&first,&last,75,3);
Display(first,last);
DeleteAtPos(&first,&last,3);

Display(first,last);
iRet=Count(first,last);
printf("count -====%d",&iRet);

    return 0;
}




