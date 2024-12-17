import java.util.*;
class program
{

void display(int value)
{
    int fact=1; 
    for(int i=value;i>0;i--)
    {
    fact=fact*i;
      
    }
System.out.println("factorial is"+fact);
}

}
class pattern6
{
public static void main(String args[])
{
    program pobj=new program();

    int no=0;
    System.out.println("enter the no");
    Scanner sc=new Scanner(System.in);
    no=sc.nextInt();
    pobj.display(no);
    

}


}

