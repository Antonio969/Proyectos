package ProyectoBybank;

public class TestReferencia {
    public static void main(String[] args) {
        Cuenta primeraCuenta = new Cuenta();
        primeraCuenta.saldo = 200;

        Cuenta segundaCuenta = primeraCuenta;
        segundaCuenta.saldo = 100;

        System.out.println("saldo Primera cuenta: " + primeraCuenta.saldo);

        System.out.println("saldo Segunda cuenta cuenta: " + segundaCuenta.saldo);

        segundaCuenta.saldo += 400;

        System.out.println("Primera cuenta: " + primeraCuenta.saldo);

        System.out.println(primeraCuenta);

        System.out.println(segundaCuenta);

    }
}