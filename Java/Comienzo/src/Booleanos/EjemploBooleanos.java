package Booleanos;

public class EjemploBooleanos {
    public static void main(String[] args) {
        int edad = 8;
        int cantidadPersonas = 2;
        boolean esPareja = cantidadPersonas >= 2;
        // Para el operador logico "y" se usa &&
        System.out.println("El valor de la condicion es: "+ esPareja);
        if (edad >= 18 || cantidadPersonas >=2 ) {
            System.out.println("Usted puede entrar");
        
        }
        else {
            System.out.println("Usted no esta permitido a"
                        + "entrar");
        }
    }
}

