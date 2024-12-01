import java.util.*;
class Calculations
{
    public float Area(float A,float B)
    {
        float fArea=0.0f;
        fArea= A*B;
        return fArea;
    }
}
class Program236
{
    public static void main(String a[])
    {   
       
        float No1=0.0f,No2=0.0f;
        float fAns=0.0f;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter length\n");
        No1=sc.nextFloat();

        System.out.println("enter breadth");
        No2=sc.nextFloat();
        Calculations aobj=new Calculations();
        fAns=aobj.Area(No1,No2);
        System.out.println("Answer is"+fAns);
    }
}