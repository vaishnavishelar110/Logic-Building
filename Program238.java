import java.util.*;
class Calculations
{
    public long Power(int A,int B)
    {
        long iMult=1;
        for(int i=1;i<=B;i++)
        {
            iMult= iMult*A;
        }
        
        return iMult;
    }
}
class Program238
{
    public static void main(String a[])
    {   
       
        int No1=0,No2=0;
        long Ans=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter Base\n");
        No1=sc.nextInt();

        System.out.println("enter index");
        No2=sc.nextInt();
        Calculations aobj=new Calculations();
        Ans=aobj.Power(No1,No2);
        System.out.println("power is"+Ans);
    }
}