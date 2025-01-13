import java.util.*;
import java.io.*;

class program447
{
    public static void main(String args[])
    {
        try{
            boolean bret=false;
             File fobj=new File("Demo.txt");
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