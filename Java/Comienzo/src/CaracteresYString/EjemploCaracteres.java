package CaracteresYString;

public class EjemploCaracteres {
    public static void main(String[] args) {
        char caracter = 'a';
        System.out.println(caracter);

        char caracter2 = 65 + 1;
        System.out.println(caracter2);

        char caracter3 = (char) (caracter2 + 1);
        System.out.println(caracter3);

        String palabra = "Alura cursos online";
        System.out.println(palabra);

        palabra = palabra + 2020;
        System.out.println(palabra);
    }
}
