import java.util.Scanner;
class Digits{
    public void CountDigits(int iNo)
    {
        int count5=0,count6=0,count7=0,count8=0;
        int iDigit=0;
        while(iNo!=0)
      {
        iDigit=iNo%10;
        if(iDigit==5)
        {
          count5++;
        }
        else if(iDigit==6)
        {
         count6++;   
        }
         else if(iDigit==7)
        {
         count7++;   
        }
         else if(iDigit==8)
        {
         count8++;   
        }
        iNo=iNo/10;
      } 
        System.out.println("number "+7+"is repeated "+count+"time");

      
    }
}
class Program246
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