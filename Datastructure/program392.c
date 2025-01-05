#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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
bool search(PNODE head,int no)
{
    bool bflag=false;
    while(head!=NULL)
    {

    if(no==head->data)
    {
        bflag=true;
        break;
    }
    else if(no>head->data)
    {
        head=head->rchild;
    }
    else if(no<head->data)
    {
        head=head->lchild;
    }
    }
    return bflag;
    
}
int Count(PNODE head)
{
    static int iCount=0;
    if(head!=NULL)
    {
        iCount++;
        Count(head->lchild);
        Count(head->rchild);
    }
    return iCount;
}
int CountParent(PNODE head)
{
    static int iCount=0;
    if(head!=NULL)
    {
        if((head->lchild!=NULL) || (head->rchild!=NULL))
        {
        iCount++;
        }
        CountParent(head->lchild);
        CountParent(head->rchild);
    }
    
    return iCount;
}
int CountLeaf(PNODE head)
{
    static int iCount=0;
    if(head!=NULL)
    {
        if((head->lchild==NULL) && (head->rchild==NULL))
        {
        iCount++;
        }
        CountLeaf(head->lchild);
        CountLeaf(head->rchild);
    }
    
    return iCount;
}
int main()
{
    PNODE first=NULL;
    bool bRet=false;
    Insert(&first,21);
     Insert(&first,11);
      Insert(&first,51);
      Insert(&first,9);
     Insert(&first,18);
      Insert(&first,35);
     Insert(&first,75);
      int iRet=0;
      iRet=Count(first);
      printf("number of nodes are %d",iRet);
          iRet=CountParent(first);
      printf("number of parent nodes are %d",iRet);
       iRet=CountLeaf(first);
      printf("number of leaf nodes are %d",iRet);

    return 0;
}