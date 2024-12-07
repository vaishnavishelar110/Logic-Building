import java.util.Scanner;
class Digits{
    public int Adddigits(int iNo)
    {
       
        int iAdd=0;
        
       while(iNo!=0)
       {
            iAdd=iAdd+iNo%10;
        
            iNo=iNo/10;
       }
        return iAdd;
    }
}
class Program244
{
public static void main(String V[])
{
    Digits sobj=new Digits();
    int iValue=0,iRet=0;
Scanner sc=new Scanner(System.in);
System.out.println("enter number");
iValue=sc.nextInt();
iRet=sobj.Adddigits(iValue);
System.out.println("Add of digits is"+iRet);

}

}