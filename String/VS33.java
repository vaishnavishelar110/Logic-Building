import java.util.*;
class StringX
{
    boolean flag=false;
boolean Display(char sh)
{
if((sh>=48 && sh<=57))
{
    flag=true;
}
else
{
   flag=false; 
}
return flag;
}

}

class VS33
{

    public static void main(String args[])
    {
        StringX sobj=new StringX();
        boolean bflag=false;
        System.out.println("enter character\n");
        Scanner sc=new Scanner(System.in);
       char ch=sc.next().charAt(0);
        bflag=sobj.Display(ch);
        

        if(bflag==true)
{
    System.out.println("digit");
}
else
{
   System.out.println("not digit"); 
}
sc.close();
    }
    
}