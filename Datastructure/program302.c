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

void Demo1(PNODE head)
{

}
void Demo2(PPNODE head)
{
    
}
int main()
{
 node obj1;
 node obj2;
 node obj3;
 PNODE first= NULL;

obj1.data=11;
obj2.data=21;
obj3.data=51;


obj1.next=&obj2;
obj2.next=&obj3;
obj3.next=NULL;

first=&obj1;

printf("%d\n",first->data);
printf("%d\n",first->next->data);
printf("%d\n",first->next->next->data);

Demo1(first);
Demo2(&first);
    return 0;
}