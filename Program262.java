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
    public int Display()
    {
       int Max=Arr[0];
        for(int i=0;i<Arr.length;i++)
        {
            if(Max<Arr[i])
            {
                Max=Arr[i];
            }
          
        }    
        return Max;
    }
   
}

class Program262
{
public static void main(String V[])
{
    
    int iValue=0,iRet=0;
Scanner sc=new Scanner(System.in);
    System.out.println("how many elements you want to store");
     iValue=sc.nextInt();
     ArrayX sobj=new ArrayX(iValue);
sobj.Accept();
iRet=sobj.Display();
System.out.println("maximum element is"+iRet);
sobj=null;


}

}