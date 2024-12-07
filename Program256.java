import java.util.Scanner;
class Digits{
    public void CountDigits(int iSize)
    {
        Scanner sc=new Scanner(System.in);
        int Arr[]=new int[iSize];
        System.out.println("enter array elements");
        for(int i=0;i<iSize;i++)
        {
            Arr[i]=sc.nextInt();
        }
        System.out.println("entered array elements are");
        for(int i=0;i<iSize;i++)
        {
           System.out.println(Arr[i]);
        }    
    }
}

class Program255
{
public static void main(String V[])
{
    Digits sobj=new Digits();
    int iValue=0,iRet=0;
Scanner sc=new Scanner(System.in);
    System.out.println("how many elements you want to store");
     iValue=sc.nextInt();
sobj.CountDigits(iValue);


}

}