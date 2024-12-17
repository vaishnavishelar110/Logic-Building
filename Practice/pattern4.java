import java.util.*;
class program
{

void display(int value)
{
    for(int i=1;i<=value;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                System.out.print("2"); 
            }
            else
            {
                System.out.print("1"); 
            }
          
          
        }
         
         System.out.print("\n");
    }

}

}
class pattern4
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

