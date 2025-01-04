#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;


};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Enqueue(PPNODE head,int no)  //InsertLast
{
    PNODE newn=NULL;
    PNODE temp=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
if(*head==NULL)
{
    *head=newn;
}
else 
{
    temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->next=newn;
}

}
int Dequeue(PPNODE head) //Delete first
{
    int no=-1;
if(*head==NULL)
{
    printf("queue is empty\n");
    return -1;
}
else if((*head)->next==NULL)
{
    no=(*head)->data;
    free(*head);
    *head=NULL;
}
else 
{
    no=(*head)->data;
    PNODE temp=NULL;
    temp=*head;
    *head=temp->next;
    

    free(temp);
}
return no;
}
void Display(PNODE head)
{
while(head!=NULL)
{
    printf("| %d |",head->data);
    head=head->next;
}
}
int Count(PNODE head)
{
    int iCount=0;
while(head!=NULL)
{
    
    head=head->next;
    iCount++;
}
return iCount;
}
int main()
{
    int iRet=0;
    PNODE front=NULL;
    Enqueue(&front,51);
    Enqueue(&front,21);
    Enqueue(&front,11);
Display(front);
int value=0;
value=Dequeue(&front);
printf("\nPoped elements is %d\n",value);
value=Dequeue(&front);
printf("Poped elements is %d\n",value);

Display(front);
iRet=Count(front);
printf("number of elements are %d\n",iRet);

    iRet=Count(front);


    return 0;
}