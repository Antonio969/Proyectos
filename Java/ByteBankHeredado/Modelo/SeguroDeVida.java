package ByteBankHeredado.Modelo;

public class SeguroDeVida implements Tributacion {

    @Override
    public double getValorImpuesto() {
        return super.saldo * 0.01;
    }

	public void depositar(double d) {
	}

}