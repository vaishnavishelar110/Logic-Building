#include<iostream>
using namespace std;

struct node
{
    int data;
    int iCount;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyLL
{
    public: 

        PNODE head;
        SinglyLL()
        {
            head=NULL;
            iCount=0;
        }

        void InsertFirst(int no){}
        void InsertLast(int no){}
        void InsertAtPos(int no,int iPos){}
        void DeleteFirst(){}
        void DeleteLast(){}
        void DeleteAtPos(int iPos){}
        void Display(){}
        int Count(){
            return iCount;
        }     

};
/*void InsertFirst()
{

}
void InsertLast()
{

}
void DeleteFirst()
{

}
void DeleteLast()
{

}
void InsertAtFirst()
{

}
void DeleteAtPos()
{

}
void Display()
{

}
int Count()
{

}
*/
int main()
{
    SinglyLL sobj;
    return 0;
}