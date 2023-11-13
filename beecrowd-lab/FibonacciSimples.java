import java.util.Scanner;

public class FibonacciSimples {
    public static int Fibonacci(int numero){
        if( numero == 0) return 0;
        else if (numero == 1) return 1;
        else return Fibonacci(numero - 1) + Fibonacci(numero -2);

    }
    public static void main(String[] args) {
        int x;
        Scanner input = new Scanner(System.in);
        x = input.nextInt();
        int[] vetor = new int[x];
        for(int i = 0; i < x ; i++){
            vetor[i] = Fibonacci(i);
        }
        for(int i = 0; i< x ; i++){
            if(i != x-1){
                System.out.printf("%d ", vetor[i]);
            }
            else System.out.printf("%d%n", vetor[i]);

        }

    }
}
