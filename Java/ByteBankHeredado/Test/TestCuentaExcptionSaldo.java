package ByteBankHeredado.Test;
import ByteBankHeredado.Modelo.*;
public class TestCuentaExcptionSaldo {
    public static void main(String[] args) {
        Cuenta cuenta = new CuentaAhorros(123, 456);
        cuenta.depositar(200);
        try {
            cuenta.saca(210);
        } catch (SaldoInsuficienteException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }
}
