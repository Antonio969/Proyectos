package ProyectoBybank;


public class PruebaMetodos {
    public static void main(String[] args) {
        Cuenta micuenta = new Cuenta();
        micuenta.saldo = 300;
        micuenta.depositar(micuenta.saldo);

        System.out.println(micuenta.saldo);

        micuenta.retirar(100);
        System.out.println(micuenta.saldo);
        Cuenta cuentaDeJimena = new Cuenta();
        cuentaDeJimena.saldo = 1000;
        boolean puedeTransferir = cuentaDeJimena.transferir(400, micuenta);
        if(puedeTransferir){
            System.out.println("Transferencia exitosa");
        }else{
            System.out.println("No puede transferir");
        }
        System.out.println(micuenta.saldo);
        System.out.println(cuentaDeJimena.saldo);
    
    }
}
