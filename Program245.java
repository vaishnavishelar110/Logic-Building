import java.util.Scanner;
class Digits{
    public void CountDigits(int iNo)
    {
        int count=0;
        int iDigit=0;
        while(iNo!=0)
      {
        iDigit=iNo%10;
        if(iDigit==8)
        {
          count++;
        }
        iNo=iNo/10;
      } 
        System.out.println("number "+8+"is repeated "+count+"time");

      
    }
}
class Program245
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