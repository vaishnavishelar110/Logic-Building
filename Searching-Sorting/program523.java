import java.util.*;

class program523
{
    public static void Update(int Brr[])
    {
        Brr[0]++;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the no of elements:");
        int iSize=sc.nextInt();
        
        int Arr[]=new int[iSize];
        System.out.println("enter the values:");
        for(int i=0;i<iSize;i++)
        {
            Arr[i]=sc.nextInt();
        }
        Update(Arr);
        System.out.println("elements of the array are:");
        for(int i=0;i<iSize;i++)
        {
            
        System.out.println(Arr[i]+"\t");
        }
        System.out.println();
    }
}