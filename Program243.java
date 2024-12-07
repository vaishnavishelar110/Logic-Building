import java.util.Scanner;
class Digits{
    public int Add(int iNo)
    {
        int iDigit=0;
        int iAdd=0;
        
       while(iNo!=0)
       {

        iDigit=iNo%10;
        if(iDigit!=0)
        {
            iAdd=iAdd+iDigit;
        }
        
        iNo=iNo/10;
       }
        return iAdd;
    }
}
class Program243
{
public static void main(String V[])
{
    Digits sobj=new Digits();
    int iValue=0,iRet=0;
Scanner sc=new Scanner(System.in);
System.out.println("enter number");
iValue=sc.nextInt();
iRet=sobj.Add(iValue);
System.out.println("Add of digits is"+iRet);

}

}