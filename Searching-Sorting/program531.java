import java.util.*;

class program531
{
    public static void SelectionSort(int Brr[])
    {
        int i=0,j=0,min_index=0,temp=0;
        for(i=0;i<Brr.length;i++)
        {
            min_index=i;
            for(j=i;j<Brr.length;j++)
            {
                if(Brr[min_index]>Brr[j])
                {
                    min_index=j;
                }
            }
            temp=Brr[i];
            Brr[i]=Brr[min_index];
            Brr[min_index]=temp;
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
        
       
        SelectionSort(Arr);
           System.out.println("elements of array after sorting");


        for(int i=0;i<iSize;i++)
        {
            
        System.out.println(Arr[i]+"\t");
        }
        System.out.println();
        
    }
}
