class Demo
{
public void Display(int no1)
{
for(int i=0;i<no1;i++)
{
System.out.println(" *  $ ");
}
}
    
};
class Pattern1 
{
    public static void main(String args[])
    {
        Demo dobj=new Demo();
        dobj.Display(8);
        
}
}