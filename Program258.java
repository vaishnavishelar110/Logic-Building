import java.util.Scanner;
class ArrayX{

   public int Arr[];
   public ArrayX(int iSize)
   {
        Arr=new int[iSize];
   }
    public void Accept()
    {
        Scanner sc=new Scanner(System.in);
     
        System.out.println("enter array elements");
        for(int i=0;i<Arr.length;i++)
        {
            Arr[i]=sc.nextInt();
        }
    }
    public void Display()
    {
        System.out.println("entered array elements are");
        for(int i=0;i<Arr.length;i++)
        {
           System.out.println(Arr[i]);
        }    
    }
    protected void dinalise()
    {
        Arr=null;
        System.out.println("finally in finalise");
    }
}

class Program258
{
public static void main(String V[])
{
    
    int iValue=0,iRet=0;
Scanner sc=new Scanner(System.in);
    System.out.println("how many elements you want to store");
     iValue=sc.nextInt();
     ArrayX sobj=new ArrayX(iValue);
sobj.Accept();
sobj.Display();


}

}