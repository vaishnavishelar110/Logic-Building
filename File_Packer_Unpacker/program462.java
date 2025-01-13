import java.util.*;
import java.io.*;

class program462
{
    public static void main(String args[])throws Exception
    {

        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the name of source file:");
        String src=sobj.nextLine();

        System.out.println("Enter the name of destination file:");
        String dest=sobj.nextLine();

        File fsrc=new File(src);
        File fdest=new File(dest);

        if(fdest.exists())
        {
            System.out.println("Destination file is already presnt..");
            System.out.println("Unable to copy");
            return;
        }
        else
        {
            fdest.createNewFile();

            if(!fsrc.exists())
            {
                System.out.println("source file is missing");
                System.out.println("unable tp copy");
                return;
            }
            FileInputStream fiobj=new FileInputStream(fsrc);
            FileOutputStream foobj=new FileOutputStream(fdest);

            int iRet = 0;
            byte Arr[] = new byte[1024];

            while((iRet = fiobj.read(Arr)) != -1)
            {
                foobj.write(Arr);
            }


        }
    }
}