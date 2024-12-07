import java.util.Scanner;
class Digits{
    public void CountDigits(int iNo)
    {
        int count[]={0,0,0,0,0,0,0,0,0};
        int iDigit=0;
        while(iNo!=0)
      {
        iDigit=iNo%10;
        count[iDigit]++;
             iNo=iNo/10;
      }
        for(int i=0;i<=9;i++)
        {
        System.out.println("number "+i+"is repeated "+count[i]+"time");
        } 
      } 
    }

class Program250
{
public static void main(String V[])
{
    Digits sobj=new Digits();
    int iValue=0,iRet=0;
Scanner sc=new Scanner(System.in);
System.out.println("enter number");
iValue=sc.nextInt();
sobj.CountDigits(iValue);


}

}