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


int main()
{
    PNODE first=NULL;
    Insert(&first,66);
     Insert(&first,26);
      Insert(&first,16);
    return 0;
}