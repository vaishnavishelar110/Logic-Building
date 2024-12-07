import java.util.Scanner;
class Digits{
    public int Muldigits(int iNo)
    {
        int iDigit=0;
        int iMult=1;
        
       while(iNo!=0)
       {

        iDigit=iNo%10;
        if(iDigit!=0)
        {
            iMult=iMult*iDigit;
        }
        
        iNo=iNo/10;
       }
        return iMult;
    }
}
class Program242
{
public static void main(String V[])
{
    Digits sobj=new Digits();
    int iValue=0,iRet=0;
Scanner sc=new Scanner(System.in);
System.out.println("enter number");
iValue=sc.nextInt();
iRet=sobj.Muldigits(iValue);
System.out.println("mul of digits is"+iRet);

}

}