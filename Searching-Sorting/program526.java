import java.util.*;

class program526
{
    public static boolean LinearSearchBidirectional(int Brr[],int iNo)
    {
        int i=0,j=0;
        boolean flag=false;
        int iStart=0,iEnd=0;
      
        for( i=0,j=Brr.length-1;i<=j;i++,j--)
        {
              if((Brr[i]==iNo)|| (Brr[j]==iNo))
              {
                flag=true;
                break;
              }
            
        }

            return flag;
        
    
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
        bRet=LinearSearchBidirectional(Arr,iValue);
    

        if(bRet==true)
        {
            
        System.out.println("element is present in array");
        }
        else{
            
        System.out.println("no such element");
        }
    }
}
