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
    public void Display()
    {
        if(head==null)
        {
            System.out.println("LL is empty\n");

        }
        else{
            while(head!=null)
            {
                System.out.println(head.data);
                head=head.next;
            }
        }
    }
}
class program505
{
public static void main(String args[])
{
SinglyLL sobj=new SinglyLL();
sobj.InsertFirst(51);
sobj.InsertFirst(21);
sobj.InsertFirst(11);

sobj.Display();

}

}