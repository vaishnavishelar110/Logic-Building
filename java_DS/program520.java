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
public void DeleteFirst()
{
    if((head==null)&& (tail==null))
    {
        return;
    }
    else if(head==tail)
    {
        head=null;
        tail=null;
    }
    else{
        head=head.next;
        tail.next=head;
        head.prev=tail;
    }
    System.gc();
    iCount--;
}
public void DeleteLast()
{
    if((head==null)&& (tail==null))
    {
        return;
    }
    else if(head==tail)
    {
        head=null;
        tail=null;
    }
    else{
        tail=tail.prev;
        tail.next=head;
        head.prev=tail;
    }
    System.gc();
    iCount--;
}
public void InsertAtPos(int no,int iPos)
{
if((iPos<1) || (iPos>iCount+1))
{
    System.out.println("invalid position\n");
    return;
}
if(iPos==1)
{
    InsertFirst(no);
}
else if(iPos==iCount+1)
{
    InsertLast(no);
}
else{
    node newn=new node(no);
    node temp=head;
    for(int i=1;i<iPos-1;i++)
    {
        temp=temp.next;
    }
    newn.next=temp.next;
    temp.next.prev=newn;
    temp.next=newn;
    newn.prev=temp;
    iCount++;
}
}

public void DeleteAtPos(int iPos)
{
    if((iPos<1) || (iPos>iCount+1))
{
    System.out.println("invalid position\n");
    return;
}
if(iPos==1)
{
    DeleteFirst();
}
else if(iPos==iCount)
{
    DeleteLast();
}
else{
    node temp=head;
    for(int i=1;i<iPos-1;i++)
    {
        temp=temp.next;
    }
    
    temp.next=temp.next.next;
    temp.next.prev=temp;
    
    iCount--;
}
}
public void Display()
{
    node temp=head;

    if((head!=null) && (tail!=null))
    {
        System.out.println("elements of LL are:");
    
do{
System.out.print("|"+ temp.data+"|<=>");
temp=temp.next;
}while(temp!=tail.next);
}
System.out.println(" ");
}

public int Count()
{
    return iCount;
}
}
class program520

{
    public static void main(String args[])
    {
        int iRet=0;
        DoublyCL dobj=new DoublyCL();
        dobj.InsertFirst(51);
         dobj.InsertFirst(21);
          dobj.InsertFirst(11);
        dobj.InsertLast(151);
         dobj.InsertLast(121);
          dobj.InsertLast(101);
           dobj.InsertAtPos(75,4);
        dobj.Display();
        iRet=dobj.Count();
        System.out.println("no of elemets are:"+iRet);

        dobj.DeleteFirst();
        dobj.Display();
        iRet=dobj.Count();
        System.out.println("no of elemets are:"+iRet);
        dobj.DeleteLast();
        dobj.InsertAtPos(175,4);
        dobj.Display();
        iRet=dobj.Count();
        System.out.println("no of elemets are:"+iRet);

        dobj.DeleteAtPos(4);
        dobj.Display();
        iRet=dobj.Count();
        System.out.println("no of elemets are:"+iRet);
    }
}