package ByteBankHeredado.Test;
import ByteBankHeredado.Modelo.*;
public class TestTributacion {

    public static void main(String[] args) {
        CuentaCorriente cc = new CuentaCorriente();
        cc.depositar(100.0);

        SeguroDeVida seguro = new SeguroDeVida();

        CalculadoraDeImpuesto calc = new CalculadoraDeImpuesto();

        calc.registra(cc);
        calc.registra(seguro);

        System.out.println(calc.getTotalImpuesto());
    }

}