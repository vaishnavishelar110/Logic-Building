import java.util.*;
class Calculations
{
    public float percentage(int A,int B)
    {
        float fResult=0.0f;
        fResult=((float) A /(float) B)*100;
        return fResult;
    }
}
class Program234
{
    public static void main(String a[])
    {   
       
        int No1=0,No2=0;
        float fAns=0.0f;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter obtained marks\n");
        No1=sc.nextInt();

        System.out.println("enter total marks");
        No2=sc.nextInt();
         Calculations aobj=new Calculations();
        fAns=aobj.percentage(No1,No2);
        System.out.println("Answer is"+fAns);
    }
}