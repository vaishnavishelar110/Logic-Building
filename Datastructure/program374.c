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

void Push(PPNODE head,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
if(*head==NULL)
{
    *head=newn;
}
else 
{
    newn->next=*head;
    *head=newn;
}

}
int pop(PPNODE head)
{
    int no=-1;
if(*head==NULL)
{
    printf("stact is empty\n");
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
    PNODE top=NULL;
    Push(&top,51);
    Push(&top,21);
    Push(&top,11);
Display(top);
int value=0;
value=pop(&top);
printf("\nPoped elements is %d\n",value);
value=pop(&top);
printf("Poped elements is %d\n",value);

Display(top);
iRet=Count(top);
printf("number of elements are %d\n",iRet);

    iRet=Count(top);


    return 0;
}