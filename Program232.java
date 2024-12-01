import java.util.*;
class Arithmatic
{
    public int iValue1;
    public int iValue2;
    Arithmatic(int A,int B)
    {

        iValue1=A;
        iValue2=B;
    }
    public int Addition()
    {
        int Result=0;
        Result=iValue1+iValue2;
        return Result;
    }
}
class Program232
{
    public static void main(String a[])
    {   
       
        int No1=0,No2=0,Ans=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter firdt no");
        No1=sc.nextInt();

        System.out.println("enter Second no");
        No2=sc.nextInt();
         Arithmatic aobj=new Arithmatic(No1,No2);
        Ans=aobj.Addition();
        System.out.println("Answer is"+Ans);
    }
}