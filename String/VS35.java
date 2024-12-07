import java.util.*;
class StringX
{
    
void Displaytime(char div)
{
if((div=='A'))
{
   System.out.println("your exeam timimg is 7AM \n");
}
else if(div=='B')
{
   System.out.println("your exeam timimg is 8AM \n");
}
else if(div=='C')
{
   System.out.println("your exeam timimg is 9AM \n");
}
else if(div=='D')
{
   System.out.println("your exeam timimg is 10AM \n");
}
else
{
    System.out.println("you have entered invalid div \n");

}
}

}

class VS35
{

    public static void main(String args[])
    {
        StringX sobj=new StringX();
        
        System.out.println("enter Division\n");
        Scanner sc=new Scanner(System.in);
       char ch=sc.next().charAt(0);
        sobj.Displaytime(ch);
        sc.close();
    }
    
}