import java.util.*;
import java.io.*;

class program451
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
        System.out.println("File is already existing in the folder");
    }
    else
    {
      bret=fobj.createNewFile();   
    if(bret==true)
    {
        System.out.println("file successfuly created");
        FileOutputStream foobj=new FileOutputStream(fobj);
        String str="jay gnesh";
        foobj.write(str);

    
    }
    else
    {
        System.out.println("unable to create the file ");
    }
    

        }
        }
    catch(Exception eobj)
    {
        System.out.println("excepion occured"+eobj);
    }    
    }
    
}