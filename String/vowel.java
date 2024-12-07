import java.util.*;
class chkvowel
{
void display(String str)
{
    int count=0;
System.out.println(str);
for(int i=0;i!=str.length();i++)
{
    if(str.charAt(i)=='a' ||  str.charAt(i)=='e'|| str.charAt(i)=='i' ||  str.charAt(i)=='o' ||  str.charAt(i)=='u')
    {
        count++;
    }
}
System.out.println("count of vowels =="+(count));
}

}
class vowel{
    public static void main(String args[])
    {

        chkvowel cobj=new chkvowel();
         Scanner sc=new Scanner(System.in);
        System.out.println("enter String");
        String st=null;
       
        st=sc.next();
        cobj.display(st);
        //System.out.println("count=="+iRet);

    }
}