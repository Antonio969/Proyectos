package ByteBankHeredado.Modelo;

public class Gerente extends Funcionario implements Autenticable {
    

	@Override
	public void setClave(String clave) {
		// TODO Auto-generated method stub
		throw new UnsupportedOperationException("Unimplemented method 'setClave'");
	}

	@Override
	public boolean iniciarSesion(String clave) {
		// TODO Auto-generated method stub
		throw new UnsupportedOperationException("Unimplemented method 'iniciarSesion'");
	}

	@Override
	public double getBonificacion() {
		// TODO Auto-generated method stub
		throw new UnsupportedOperationException("Unimplemented method 'getBonificacion'");
	}

}
