import java.util.*;
class Program230
{
    public static int Addition(int A,int B)
    {
        int Result=0;
        Result=A+B;
        return Result;
    }


    public static void main(String a[])
    {
        int No1=0,No2=0,Ans=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter firdt no");
        No1=sc.nextInt();

        System.out.println("enter Second no");
        No2=sc.nextInt();
        
        Ans=Addition(No1,No2);
        System.out.println("Answer is"+Ans);
    }
}