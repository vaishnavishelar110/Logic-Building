import java.util.*;
import java.io.*;

class program459
{
    public static void main(String args[])
    {
        try{
            boolean bret=false;
            Scanner sc=new Scanner(System.in);

            System.out.println("enter the file name that you want to create");
             String name=sc.nextLine();
    
             File fobj=new File(name);
   
    if(fobj.exists())
    {
        int iRet=0;
        FileInputStream fiobj=new FileInputStream(fobj);

        byte arr[]=new byte[1024];
        while((iRet=fiobj.read(arr))!=0)
        {
        String str=new String(arr);
        System.out.print(str);
           System.out.println("Return value of read is : "+iRet);
    }
    }
    else
    {
        System.out.println("there is no such file");
        
    
    }
    }
    catch(Exception eobj)
    {
        System.out.println("excepion occured"+eobj);
    }    
    }
    
}