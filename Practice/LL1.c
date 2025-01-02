#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next; // pointer to next node


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
void InsetLast(PPNODE head,int no)
{

}

void Display(PNODE head)
{
    printf("dh");
    while(head!=NULL)
    {
    
        printf("| %d | -> ",head->data);
            head=head->next;
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

int main()
{
PNODE first=NULL;
int iRet=0;
InsertFirst(&first,51); 
InsertFirst(&first,21);
InsertFirst(&first,11);  

Display(first);
iRet=count(first);
printf("number of elements are %d\n",iRet);
    return 0;
}