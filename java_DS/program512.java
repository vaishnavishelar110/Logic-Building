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
class Stack
{
    public node head;
    public int iCount;

    public Stack()
    {
        head=null;
        iCount=0;
        
    }
    public void Push(int no)
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
    
    public int Pop()
    {
        int no=0;
        if(head==null)
        {
            System.out.println("statck is empty\n");
            return -1;
        }
        else if(head.next==null)
        {
             no=head.data;
            head=null;
            System.gc();
        }
        else
        {
            no=head.data;
            head=head.next;
            System.gc();

        }
        iCount--;
        return no;
    }

     

    
    public void Display()
    {
        node temp=null;
        System.out.println("Elements of stack are:");
        temp=head;
        if(temp==null)
        {
            System.out.println("stack is empty\n");

        }
        else{
            while(temp!=null)
            {
                System.out.print(" "+temp.data+" ");
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
class program512
{
public static void main(String args[])
{
    int iRet=0;
Stack sobj=new Stack();
sobj.Push(111);
sobj.Push(101);
sobj.Push(51);
sobj.Push(21);
sobj.Push(11);


sobj.Display();
iRet=sobj.Count();
System.out.println("number of elements are:"+iRet);

sobj.Pop();
sobj.Display();
iRet=sobj.Count();
System.out.println("number of elements are:"+iRet);




}

}