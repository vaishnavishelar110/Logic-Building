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
class Queue
{
    public node head;
    public int iCount;

    public Queue()
    {
        head=null;
        iCount=0;
        
    }
    
    public void Enqueue(int no)
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
    public int Dequeue()
    {
        int no=0;
        if(head==null)
        {
            System.out.println("LL is empty\n");
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
        System.out.println("Elements of queue are:");
        temp=head;
        if(temp==null)
        {
            System.out.println("queue is empty\n");

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
class program513
{
public static void main(String args[])
{
    int iRet=0;
Queue qobj=new Queue();

qobj.Enqueue(101);
qobj.Enqueue(121);
qobj.Enqueue(151);
qobj.Display();
iRet=qobj.Count();
System.out.println("number of elements are:"+iRet);

int dRet=qobj.Dequeue();
System.out.println("removed elements iss:"+dRet);
qobj.Display();
iRet=qobj.Count();
System.out.println("number of elements are:"+iRet);

}

}