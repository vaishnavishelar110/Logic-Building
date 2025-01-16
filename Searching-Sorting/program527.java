import java.util.*;

class program527
{
    public static boolean BinarySearch(int Brr[],int iNo)
    {

     int iStart=0,iEnd=Brr.length-1,iMid=0;
     boolean bResult=false;
     while(iStart<=iEnd)
     {
        iMid=iStart+(iEnd-iStart)/2;
        if(Brr[iMid]==iNo)
        {
            bResult=true;
            break;
        }
        if(iNo>Brr[iMid])
        {
            iStart=iMid+1;
        }
        else{
            iEnd=iMid-1;
        }
     }   
     return bResult;
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
        bRet=BinarySearch(Arr,iValue);
    

        if(bRet==true)
        {
            
        System.out.println("element is present in array");
        }
        else{
            
        System.out.println("no such element");
        }
    }
}
