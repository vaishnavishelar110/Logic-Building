import java.io.*;
import java.util.*;

class program476
{
    public static void main(String Arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of directory that you want to open : ");
        String DirName = sobj.nextLine();
        System.out.println("enter the name of packed file that you want to open");
        String PackName=sobj.nextLine();

        File Packobj=new File(PackName);
        boolean bret=false;
        bret=Packobj.createNewFile();
        if(bret==true)
        {
            System.out.println("packed file gets creeted with name: "+PackName);
        }
        else{
                        System.out.println("unable to create filepacked ");

            return;            
        }
        File fobj = new File(DirName);

        if(fobj.exists())
        {
            System.out.println("Directory is successfully opened");

            File Arr[] = fobj.listFiles();

            System.out.println("Number of files in the Directory are : "+Arr.length);
            String Header="";
            int i = 0,j=0;

            for(i = 0; i < Arr.length; i++)
            {
                Header=Arr[i].getName()+" "+Arr[i].length();
                System.out.println(Header);
            }
              for(j = Header.length(); j < 100; j++)
            {
                Header=Header+ "";

            }
            Header="";
        }
        else
        {
            System.out.println("There is no such director");
             System.out.println("-----------------------");
        }
    }
}