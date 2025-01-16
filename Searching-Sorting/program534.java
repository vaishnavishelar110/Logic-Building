import java.util.*;

class program534
{
    public static void InsertionSort(int Brr[])
    {
        int i=0,j=0,k=0,selected=0;
        for(i=1;i<Brr.length;i++)
        {
        
            for(j=i-1,selected=Brr[i];((j>=0) && (Brr[j]>selected));j--)
            {
                Brr[j+1]=Brr[j];
            }
            Brr[j+1]=selected;
           
        }
        
    }    

    public static void main(String args[])
    {
        int iValue=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the no of elements:");
        int iSize=sc.nextInt();
        
        int Arr[]=new int[iSize];
        System.out.println("enter the values:");
        for(int i=0;i<iSize;i++)
        {
            Arr[i]=sc.nextInt();
        }
        System.out.println("elements of the array are:");
        for(int i=0;i<iSize;i++)
        {
            
        System.out.println(Arr[i]+"\t");
        }
        System.out.println();
        
       
        InsertionSort(Arr);
           System.out.println("elements of array after sorting");


        for(int i=0;i<iSize;i++)
        {
            
        System.out.println(Arr[i]+"\t");
        }
        System.out.println();
        
    }
}