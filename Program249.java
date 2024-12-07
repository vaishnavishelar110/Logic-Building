import java.util.Scanner;
class Digits{
    public void CountDigits(int iNo)
    {
        int value=iNo;
        int counti=0;
        int iDigit=0;
        while(iNo!=0)
      {
        iDigit=iNo%10;
        for(int i=0;i<=9;i++)
        {
            
            if(iDigit==i)
        {
          counti++;
        }
             iNo=iNo/10;
        }
        System.out.println("number "+iDigit+"is repeated "+counti+"time");
    
        iNo=value;
        counti=0;
      } 
        

      
    }
}
class Program249
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