import java.util.*;
class StringX
{
void Display(char sh)
{
if((sh>='A' && sh<='Z') || (sh>='a' && sh<='z'))
{
    System.out.println("alphabet");
}
else
{
   System.out.println("other"); 
}
}

}

class VS30
{

    public static void main(String args[])
    {
        StringX sobj=new StringX();
        
        System.out.println("enter character\n");
        Scanner sc=new Scanner(System.in);
       char ch=sc.next().charAt(0);
        sobj.Display(ch);
        sc.close();

    }
}