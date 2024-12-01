import java.util.*;
class Calculations
{
    public int Area(int A,int B)
    {
        int iArea=0;
        iArea= A*B;
        return iArea;
    }
}
class Program235
{
    public static void main(String a[])
    {   
       
        int No1=0,No2=0;
        int Ans=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter length\n");
        No1=sc.nextInt();

        System.out.println("enter breadth");
        No2=sc.nextInt();
        Calculations aobj=new Calculations();
        Ans=aobj.Area(No1,No2);
        System.out.println("Answer is"+Ans);
    }
}