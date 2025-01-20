import java.util.*;

class Matrix
{
    public int Arr[][];

    public Matrix(int iRow, int iCol)
    {
        Arr = new int[iRow][iCol];
    }

    public void Accept()
    {
        System.out.println("Please enter the values : ");

        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        for(i = 0; i < Arr.length;i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of the matrix are : ");
        int i = 0, j = 0;

        for(i = 0; i < Arr.length;i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

public int Sum()
    {
        int iSum = 0;
        int i = 0, j = 0;

        for(i = 0; i < Arr.length;i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                iSum = iSum + Arr[i][j];
            }
        }
        return iSum;
    }


    public int count()
    {
           int iCount = 0;
        int i = 0, j = 0;

        for(i = 0; i < Arr.length;i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(Arr[i][j]%2==0)
                {
                iCount++;
            }
            }
        }
        return iCount;
    }
    }


class program576
{
    public static void main(String Arg[])
    {

int iRow=0,iCol=0,iRet=0;
         Scanner sc = new Scanner(System.in);

System.out.println("Please enter number of rows : ");
        iRow = sc.nextInt();

        System.out.println("Please enter number of columns : ");
        iCol = sc.nextInt();
        
        Matrix mobj = new Matrix(iRow,iCol);
        mobj.Accept();

        mobj.Display();
        iRet=mobj.Sum();
        
System.out.println("sum=="+iRet);
int ic=0;
ic=mobj.count();
        
System.out.println("count=="+ic);

    }
}