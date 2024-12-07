import java.util.*;
class Count
{
void display(String str)
{
    int count=0;
System.out.println(str);
for(int i=0;i!=str.length();i++)
{
    if(str.charAt(i)<=65 ||  str.charAt(i)>=89)
    {
        count++;
    }
    
}
System.out.println("small count"+count);
}

}
class VS37
{
    public static void main(String args[])
    {

        Count cobj=new Count();
         Scanner sc=new Scanner(System.in);
        System.out.println("enter String");
        String st=null;
       
        st=sc.next();
        cobj.display(st);
        //System.out.println("count=="+iRet);

    }
}