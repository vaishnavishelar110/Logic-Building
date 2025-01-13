import java.util.*;
import java.io.*;

class program455
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
        System.out.println("File name is :"+fobj.getName());
         System.out.println("File size is"+fobj.length());
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