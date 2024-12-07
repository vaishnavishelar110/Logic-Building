import java.util.Scanner;
class Numbers{
    public int EvenFactors(int iNo)
    {
        int even=0;
        if(iNo%2!=0)
            {
                return 0;
            }
        for(int i=1;i<=(iNo/2);i++)
        {
            
            if(iNo%i==0)
            {
                if(iNo%2==0)
                {
                    even=even+i;
                }
               
            }
        }
        return even;
    }
}
class Program239
{
public static void main(String V[])
{
    Numbers sobj=new Numbers();
    int iValue=0,iRet=0;
Scanner sc=new Scanner(System.in);
System.out.println("enter number");
iValue=sc.nextInt();
iRet=sobj.EvenFactors(iValue);
System.out.println("Addition of even factors is"+iRet);

}

}