class node
{
    public int data;
    public node next;
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
        newn=new node();
        newn.data=no;
        newn.next=null;
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
    /*public void Display()
    {
        if(head==null)
        {
            System.out.println("LL is empty\n");

        }
        else{
            public node temp=null;
            temp=new node(); 
            temp=head;
            while(temp!=null)
            {
                System.out.println(temp.data);
                temp=temp.next;
            }
        }
    }*/
}
class program504
{
public static void main(String args[])
{
SinglyLL sobj=new SinglyLL();
sobj.InsertFirst(51);
sobj.InsertFirst(21);
sobj.InsertFirst(11);

//sobj.Display();

}

}