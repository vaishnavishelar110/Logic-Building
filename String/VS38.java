import java.util.*;
class Count
{
void display(String str)
{
    int counts=0,countl=0;
System.out.println(str);
for(int i=0;i!=str.length();i++)
{
    if(str.charAt(i)<=65 ||  str.charAt(i)>=89)
    {
        counts++;
    }
    else{
        countl++;
    }
    
}
System.out.println("diff of count=="+(countl-counts));
}

}
class VS38{
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