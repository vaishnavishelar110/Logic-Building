import java.util.*;

class program529
{
    public static void BubbleSort(int Brr[])
    {
        int temp=0,j=0;
        for(int i=0;i<Brr.length;i++)
        {
            for( j=0;j<Brr.length-i-1;j++)
            {
                if(Brr[j]< Brr[j+1])
                {
                    temp= Brr[j];
                    Brr[j] = Brr[j+1];
                    Brr[j+1]=temp;                }
            }
        }

        System.out.println("Data after pass::"+(i+1));
        
for(int k=0;k<Brr.length;k++)
        {

        System.out.println(Brr[k]+"\t");

        }
                System.out.println();

     
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
        
       
        BubbleSort(Arr);
           System.out.println("elements of array after sorting");


for(int i=0;i<iSize;i++)
        {
            
        System.out.println(Arr[i]+"\t");
        }
        System.out.println();
        
    }
}
