import java.util.*;
class program
{

void vowel(String str)
{
    int count=0;
   for(int i=0;i!=str.length();i++)
   {
    if(str.charAt(i)=='a'|| str.charAt(i)=='e'|| str.charAt(i)=='i'|| str.charAt(i)=='o'|| str.charAt(i)=='o' )
    {
     count++; 
    }
     
   }
   System.out.println("string contain vowel in it"+count+"times"); 
}
}
class pattern7
{
public static void main(String args[])
{
    program pobj=new program();

    String arg=null;
    System.out.println("enter string");
    Scanner sc=new Scanner(System.in);
    arg=sc.nextLine();
    pobj.vowel(arg);
    

}


}

