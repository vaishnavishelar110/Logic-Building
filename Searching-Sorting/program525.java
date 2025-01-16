import java.util.*;

class program525
{
    public static boolean LinearSearch(int Brr[],int iNo)
    {
        int i=0;
        for( i=0;i<Brr.length;i++)
        {
            if(iNo==Brr[i])
            {
                
                break;
            }
        }

            if(i<Brr.length)
            {
                return true;
            }
            else{
                return false;
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
        
        System.out.println("enter the element that you want to ssarch");
        iValue=sc.nextInt();
        boolean bRet=false;
        bRet=LinearSearch(Arr,iValue);

        if(bRet==true)
        {
            
        System.out.println("element is present in array");
        }
        else{
            
        System.out.println("no such element");
        }
    }
}
