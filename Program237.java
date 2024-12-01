import java.util.*;
class Calculations
{
    public int Power(int A,int B)
    {
        int iArea=1;
        for(int i=1;i<=B;i++)
        {
            iArea= iArea*A;
        }
        
        return iArea;
    }
}
class Program237
{
    public static void main(String a[])
    {   
       
        int No1=0,No2=0;
        int Ans=0;
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