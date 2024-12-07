import java.util.*;
class StringX
{
    boolean flag=false;
boolean Display(char sh)
{
if((sh>='a' && sh<='z'))
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

class VS34
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
    System.out.println("small alphabet");
}
else
{
   System.out.println("other not alpha"); 
}
sc.close();
    }
    
}