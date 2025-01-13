import java.util.*;
import java.io.*;

class program457
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
        FileInputStream fiobj=new FileInputStream(fobj);

        byte arr[]=new byte[20];
        fiobj.read(arr);
        String str=new String(arr);
        System.out.println("Data from File is :"+str);
       
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