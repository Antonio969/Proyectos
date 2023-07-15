package ProyectoBybank;


public class TestReferencia2 {
    public static void main(String[] args) {
        Cliente diego = new Cliente();
        diego.nombre = "Diego";
        diego.documento = "4534324234";
        diego.telefono = "735678923";

        Cuenta cuentaDeDiego = new Cuenta();
        cuentaDeDiego.agencia = 1;
        cuentaDeDiego.titular = diego;
        System.out.println(cuentaDeDiego.titular.documento);
        System.out.println(cuentaDeDiego.titular);
        System.out.println(diego);
    
    }

}
