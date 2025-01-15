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
public void InsertFirst(int no)
{
    node newn=new node(no);
    if((head==null) && (tail==null))
    {
        head=newn;
        tail=newn;
    }
    else{
        newn.next=head;
        head.prev=newn;
        head=newn;
    }
    tail.next=head;
    head.prev=tail;
    iCount++;
}
public void InsertLast(int no)
{
    node newn=new node(no);
    if((head==null) && (tail==null))
    {
        head=newn;
        tail=newn;
    }
    else{
        tail.next=newn;
        newn.prev=tail;
        tail=tail.next;
    }
    tail.next=head;
    head.prev=tail;
    iCount++;
}
}
class program516

{
    public static void main(String args[])
    {
        DoublyCL dobj=new DoublyCL();
        dobj.InsertFirst(51);
         dobj.InsertFirst(21);
          dobj.InsertFirst(11);
        dobj.InsertLast(151);
         dobj.InsertLast(121);
          dobj.InsertLast(101);
    }
}