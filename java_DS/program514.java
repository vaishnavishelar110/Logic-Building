class node{
    public int data;
    public node next;
    public node prev;
    public node(int x){
        data=x;
        next=null;
        prev=null;
    }
}
class DoublyCL
{
public node head;
public node tail;
public int iCount;

DoublyCL()
{
    head=null;
    tail=null;
    iCount=0;
}
}
class program514
{
    public static void main(String args[])
    {
        DoublyCL dobj=new DoublyCL();
    }
}