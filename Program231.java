import java.util.*;
class Arithmatic
{
    public static int Addition(int A,int B)
    {
        int Result=0;
        Result=A+B;
        return Result;
    }
}
class Program231
{
    public static void main(String a[])
    {   
        Arithmatic aobj=new Arithmatic();
        int No1=0,No2=0,Ans=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter firdt no");
        No1=sc.nextInt();

        System.out.println("enter Second no");
        No2=sc.nextInt();
        
        Ans=aobj.Addition(No1,No2);
        System.out.println("Answer is"+Ans);
    }
}