#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void Demo1(struct node *head)
{

}
void Demo2(struct node **head)
{
    
}
int main()
{
struct node obj1;
struct node obj2;
struct node obj3;
struct node *first= NULL;

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