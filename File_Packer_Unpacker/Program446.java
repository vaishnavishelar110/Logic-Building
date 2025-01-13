import java.util.*;
import java.io.*;

class program446
{
    public static void main(String args[])
    {
        try{
             File fobj=new File("Demo.txt");
    fobj.createNewFile();
    

        }
    catch(Exception eobj)
    {
        System.out.println("excepion occured"+eobj);
    }    
    }
}