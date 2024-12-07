import java.util.Scanner;

class SummationX {
    int Display(int no) {
        int even = 0, odd = 0; // Initialize sums for even and odd numbers
        int arr[] = new int[no];
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter elements:");
        for (int i = 0; i < no; i++) {
            arr[i] = sc.nextInt(); // Input elements into the array
        }

        for (int i = 0; i < no; i++) {
            if ((arr[i] % 2) == 0) { // Check if the number is even
                even = even + arr[i];
            } else { // Otherwise, it's odd
                odd = odd + arr[i];
            }
        }

        // Output sums
        System.out.println("Sum of even numbers = " + even);
        System.out.println("Sum of odd numbers = " + odd);

        return even - odd; // Return the difference between even and odd sums
    }
}

class Sum1 {
    public static void main(String args[]) {
        SummationX sobj = new SummationX();
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of elements:");
        int n = sc.nextInt(); // Input the number of elements

        if (n <= 0) { // Validate input
            System.out.println("Please enter a positive number of elements.");
        } else {
            int iRet = sobj.Display(n); // Call the Display method
            System.out.println("Difference between sum of even and odd numbers is: " + iRet);
        }

        sc.close(); // Close the scanner
    }
}
