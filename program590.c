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

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}

void InsertLast(PPNODE head, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        temp = *head;

        while(temp -> next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void Display(PNODE head)
{
    printf("Elements of LinkedList are : \n");

    while(head != NULL)
    {
        printf("| %d |->",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int iCount = 0;

    while(head != NULL)
    {
        iCount++;
        head = head -> next;
    }

    return iCount;
}

void DeleteFirst(PPNODE head)
{
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return;
    }
    if((*head) -> next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        temp = *head;
        *head = (*head) ->next;
        free(temp);
    }
}

void DeleteLast(PPNODE head)
{
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return;
    }
    if((*head) -> next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        temp = *head;
        
        while(temp -> next->next != NULL)
        {
            temp = temp -> next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void InsertAtPos(PPNODE head, int no, int ipos)
{
    int CountNode = 0;
    int i = 0;

    PNODE newn = NULL;
    PNODE temp = NULL;

    CountNode = Count(*head);

    if((ipos < 1) || (ipos > CountNode+1))  // Filter
    {
        printf("Invalid position\n");
        return;
    }
 
    if(ipos == 1)                       // Pos == 1
    {
        InsertFirst(head, no);
    }
    else if(ipos == CountNode + 1)      // Pos == Last
    {
        InsertLast(head, no);
    }
    else                                // In between position
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;

        temp = *head;

        for(i = 1; i < ipos-1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE head, int ipos)
{
    int CountNode = 0;
    int i = 0;

    PNODE temp = NULL;
    PNODE target = NULL;

    CountNode = Count(*head);

    if((ipos < 1) || (ipos > CountNode))  // Filter
    {
        printf("Invalid position\n");
        return;
    }
 
    if(ipos == 1)                       // Pos == 1
    {
        DeleteFirst(head);
    }
    else if(ipos == CountNode)      // Pos == Last
    {
        DeleteLast(head);
    }
    else                                // In between position
    {
        temp = *head;

        for(i = 1; i < ipos - 1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;

        temp->next = target->next;
        free(target);
    }
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;
    int iOption=0;
    int iPos=0;
    int iValue=0;

    while(1)
    {
        printf("--------------------");
        printf("1: Inter new element at first position\n");
         printf("2: Inter new element at latt position\n");
          printf("3: Inter new element at given position\n");
           printf("4: delete element at first position\n");
            printf("5: delete element at last position\n");
             printf("6: delete element at given position\n");
              printf("7:display the elemet\n");
              printf("8:count the elemetst\n");
              printf("9:terminate the application\n");
                 printf("--------------------");

                 if(iOption==1)
                 {
                 printf("enter the elemets :\n");
                 scanf("%d",&iValue);

                 InsertFirst(&first,iValue);
                 printf("elements inserted succc\n");

                 }
                  else if(iOption==2)
                 {
                 printf("enter the elemets :\n");
                 scanf("%d",&iValue);

                 InsertLast(&first,iValue);
                 printf("elements inserted succc\n");

                 }
                 else if(iOption==3)
                 {
                 printf("enter the elemets :\n");
                 scanf("%d",&iValue);

                 InsertAtPos(&first,iValue,iPos);
                 printf("elements inserted succc\n");
                 }
                else if(iOption==4)
                 {
                 

                DeleteFirst(&first);
                 printf("elements deleted succc\n");


                 }
                  else if(iOption==5)
                 {
                 

                DeleteLast(&first);
                 printf("elements deleted succc\n");


                 }
                  else if(iOption==6)
                 {
                 

                DeleteAtPos(&first,iPos);
                 printf("elements deleted succc\n");

                 }
                 
                  else if(iOption==7)
                 {
                 
printf("elements of the LL\n");
                Display(first);
                 

                 }
                    else if(iOption==8)
                 {
                 

                iRet=Count(first);
                
                 
                    printf("count elements are:%d\n",iRet);
                
                 }
                 else if(iOption==9)
                 {
                    printf("invalid pos terminationg program\n");
                    
                 }
    }
    return 0;
}