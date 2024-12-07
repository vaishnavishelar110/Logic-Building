import java.util.*;
class chkvowel
{
void display(String str)
{

    int count=0;
System.out.println(str);
for(int i=str.length()-1;i>=0;i--)
{
    System.out.print(str.charAt(i));
}



}

}
class Reverse{
    public static void main(String args[])
    {
        
        chkvowel cobj=new chkvowel();
         Scanner sc=new Scanner(System.in);
        System.out.println("enter String");
        String st=null;
       
        st=sc.nextLine();
        cobj.display(st);
        
        

    }
}