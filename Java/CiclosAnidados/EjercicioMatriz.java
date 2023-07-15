package CiclosAnidados;

public class EjercicioMatriz {
    public static void main(String[] args) {
        for (int fila = 0;  fila <= 10; fila++){
            // Para una matriz triangular
            for(int columna = 0; columna < fila; columna++){
                // Para una matriz triangular usamos if
                //if (columna > fila){
                //    break;
                //}
                System.out.println("*");
                System.out.println(" ");
            }
            System.out.println();
        }
    }
}
