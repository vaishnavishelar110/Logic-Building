#include<stdio.h>
#include<stdlib.h>
#pragma(1)
struct node
{
    int data;
    struct node *next;
};
int main()
{
struct node obj;
printf("size of node is:%d",sizeof(obj));


    return 0;
}