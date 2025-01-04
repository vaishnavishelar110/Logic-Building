#include<stdio.h>
#include<stdlib.h>
typedef struct node{

    int data;
    struct node *lchild;
    struct node *rchild;

}NODE,*PNODE,**PPNODE;
void Insert(PPNODE head,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->lchild=NULL;
    newn->rchild=NULL;
    PNODE temp=NULL;
    if(*head==NULL) //trree is empty
    {
        *head=newn;
    }
    else{    //tree cotains atleast one node
     temp=*head;
     while(1)
     {

        if(no>(temp->data))
        {
            if(temp->rchild==NULL)
            {
                temp->rchild=newn;
                break;
            }
            temp=temp->rchild;
        }   
        else if(no<(temp->data))
        {
            if(temp->lchild==NULL)
            {
                temp->lchild=newn;
                break;
            }
            temp=temp->lchild;
        }
        else if(no==(temp->data))
        {
            printf("unable to insert as duplicate elements\n");
            free(newn);
            break;

        }
        break;
     }
     
    }

}
void Inorder(PNODE head)
{
    if(head!=NULL)
    {
        Inorder(head->lchild);
        printf("%d\n",head->data);
        Inorder(head->rchild);
    }
}
void Preorder(PNODE head)
{
    if(head!=NULL)
    {
        printf("%d\n",head->data);
        Preorder(head->lchild);
        
        Preorder(head->rchild);
    }
}
void Postorder(PNODE head)
{
    if(head!=NULL)
    {
        Postorder(head->lchild);
       
        Postorder(head->rchild);
     printf("%d\n",head->data);
    }
}
int main()
{
    PNODE first=NULL;
    Insert(&first,30);
     Insert(&first,20);
      Insert(&first,10);
      Inorder(first);
       Preorder(first);
      Postorder(first);
    return 0;
}