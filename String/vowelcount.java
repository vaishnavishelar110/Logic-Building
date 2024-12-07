import java.util.*;
class chkvowel
{
boolean display(String str)
{
    boolean flag=false;
    int count=0;
System.out.println(str);
for(int i=0;i!=str.length();i++)
{
    if(str.charAt(i)=='a' ||  str.charAt(i)=='e'|| str.charAt(i)=='i' ||  str.charAt(i)=='o' ||  str.charAt(i)=='u')
    {
        flag=true;
        count++;
    }
}
System.out.println("count of vowels =="+(count));
return flag;

}

}
class vowelcount{
    public static void main(String args[])
    {
        boolean bflag=false;
        chkvowel cobj=new chkvowel();
         Scanner sc=new Scanner(System.in);
        System.out.println("enter String");
        String st=null;
       
        st=sc.next();
        bflag=cobj.display(st);
        if(bflag==true)
        {

            System.out.println("vowel are present");
        }
        else{
            System.out.println("vowel are not present");
        }
        

    }
}