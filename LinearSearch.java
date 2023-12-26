import java.util.Scanner;

class LinearSearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] arr = new int[5]; 
        int target; 
        int location = 0;
        boolean checker = false;

        for (int i = 0; i < 5; i++) {
            arr[i] = sc.nextInt();
        }

        target = sc.nextInt();

        for (int i = 0; i < 5; i++) {
            if (arr[i] == target) {
                location = i + 1;
                checker = true;
                break;
            }
        }

        if (checker == true) {
            System.out.println(location + " is the position of the data.");
        }

        else {
            System.out.println("Data not found.");
        }
    }
}

//time complexity:
//Best case : O(1)
//Worst Case : O(n)
//Average Case : O(n+1)/2
