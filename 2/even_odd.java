import java.util.Scanner;

public class even_odd{
    public static void main (String[]args){
        System.out.println("Enter the number: ");
        Scanner scan = new Scanner(System.in);
        int n= scan.nextInt();
        scan.close();

        String status = n % 2 == 0 ? " is Even" : " is Odd";
        System.out.println (n + status);
      }
    
    }

