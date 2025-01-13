import java.util.*;
import java.io.*;

class program448
{
    public static void main(String args[])
    {
        try{
            boolean bret=false;
            Scanner sc=new Scanner(System.in);
            System.out.println("enter the file name that you want to create");
             String name=sc.nextLine();
             File fobj=new File(name);
    bret=fobj.createNewFile();
    if(bret==true)
    {
        System.out.println("file successfuly created");
    }
    else
    {
        System.out.println("unable to create the file ");
    }
    

        }
    catch(Exception eobj)
    {
        System.out.println("excepion occured"+eobj);
    }    
    }
}