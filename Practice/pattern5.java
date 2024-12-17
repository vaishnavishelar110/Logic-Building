import java.util.*;
class program
{

void display(int value)
{
    int spaces=0,starts=0;
    for(int i=1;i<=value;i++)
    {
        spaces=value-i;
        starts=(2*i -1);
        for(int j=1;j<=i;j++)
        {
            for(int k=0;k<spaces;k++)
            {
                System.out.print(" "); 
            }
             for(int k=0;k<starts;k++)
            {
                System.out.print("*"); 
            }
          
          
        }
         
         System.out.print("\n");
    }

}

}
class pattern5
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

