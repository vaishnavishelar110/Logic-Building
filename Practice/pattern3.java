import java.util.*;
class program
{

void display(int value)
{
    for(int i=1,count=0;i<=value;i++,count=count+2)
    {
        for(int j=1;j<=i;j++)
        {
          System.out.print(count); 
          
        }
         
         System.out.print("\n");
    }

}

}
class pattern3
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

