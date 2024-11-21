import java.util.Scanner;

class D {
    void Display(int no1) {
        for (int i = 0; i < no1; i++) {
            System.out.print(" * ");
        }
    }
}

class Demo1 {
    public static void main(String args[]) {
        D dobj = new D();
        System.out.println("enter inp");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        dobj.Display(n);
        sc.close();
    }
}
