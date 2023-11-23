import java.util.Scanner;

public class Fibonacci3 {
    public static int Fibonacci(int numero){
        if( numero == 0) return 0;
        else if (numero == 1) return 1;
        else return Fibonacci(numero - 1) + Fibonacci(numero -2);

    }
    public static void main(String[] args) {
        int x, y;
        Scanner input = new Scanner(System.in);
        x = input.nextInt();
        for(int i = 0; i < x ; i++){
            y = input.nextInt();
            int fibonacci = Fibonacci(y);
            System.out.printf("Fib(%d) = %d\n", y, fibonacci);
        }
    }
}

