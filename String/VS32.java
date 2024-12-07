import java.util.*;
class StringX
{
    boolean flag=false;
boolean Display(char sh)
{
if((sh>='A' && sh<='Z'))
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

class VS32
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
    System.out.println("alphabet");
}
else
{
   System.out.println("other not alpha"); 
}
sc.close();
    }
    
}