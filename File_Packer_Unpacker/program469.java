import java.io.*;
import java.util.*;

class program469
{
    public static void main(String Arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of directory that you want to open : ");
        String DirName = sobj.nextLine();

        File fobj = new File(DirName);

        if(fobj.exists())
        {
            System.out.println("Directory is present");

            File Arr[] = fobj.listFiles();

            System.out.println("Number of files in the Directory are : "+Arr.length);

            int i = 0;

            for(i = 0; i < Arr.length; i++)
            {
                System.out.println("File name : "+Arr[i].getName()+" File Size : "+Arr[i].length());
            }
        }
        else
        {
            System.out.println("There is no such director");
        }
    }
}