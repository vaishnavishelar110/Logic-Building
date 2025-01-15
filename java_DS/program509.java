class node
{
    public int data;
    public node next;
    public node(int no)
    {
        data=no;
        next=null;
    }
}
class SinglyLL
{
    public node head;
    public int iCount;

    public SinglyLL()
    {
        head=null;
        iCount=0;
        
    }
    public void InsertFirst(int no)
    {
        node newn=null;
        newn=new node(no);
        
        if(head==null)
        {
            head=newn;
        }
        else
        {
            newn.next=head;
            head=newn;
        }
        iCount++;
    }
    public void InsertLast(int no)
    {
        node newn=null;
        newn=new node(no);
        node temp=null;
        
        if(head==null)
        {
            head=newn;
        }
        else
        {
        temp=head;
        while(temp.next!=null)
        {
            temp=temp.next;
        }    
        temp.next=newn;
        }
        iCount++;
    }
    public void DeleteFirst()
    {
        if(head==null)
        {
            System.out.println("LL is empty\n");
            return;
        }
        else if(head.next==null)
        {
            head=null;
            System.gc();
        }
        else
        {
            head=head.next;
            System.gc();

        }
        iCount--;
    }

     public void DeleteLast()
    {
        if(head==null)
        {
            System.out.println("LL is empty\n");
            return;
        }
        else if(head.next==null)
        {
            head=null;
            System.gc();
        }
        else
        {
            node temp=head;
            while(temp.next.next!=null)
            {
                temp=temp.next;
            }
            temp.next=null;

            System.gc();

        }
        iCount--;
    }
    public void Display()
    {
        node temp=null;
        System.out.println("Elements of LL are:");
        temp=head;
        if(temp==null)
        {
            System.out.println("LL is empty\n");

        }
        else{
            while(temp!=null)
            {
                System.out.print("|"+temp.data+"|->");
                temp=temp.next;
            }
            System.out.println("\n");
        }
    }
    public int Count()
    {
        return iCount;
    }
}
class program509
{
public static void main(String args[])
{
    int iRet=0;
SinglyLL sobj=new SinglyLL();
sobj.InsertFirst(51);
sobj.InsertFirst(21);
sobj.InsertFirst(11);
sobj.InsertLast(101);
sobj.InsertLast(121);
sobj.InsertLast(151);
sobj.Display();
iRet=sobj.Count();
System.out.println("number of elements are:"+iRet);

sobj.DeleteFirst();
sobj.DeleteLast();
sobj.Display();
iRet=sobj.Count();
System.out.println("number of elements are:"+iRet);

}

}