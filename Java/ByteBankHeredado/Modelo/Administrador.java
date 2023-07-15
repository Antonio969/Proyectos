package ByteBankHeredado.Modelo;

public class Administrador extends Funcionario implements Autenticable {
   
	private String clave;

	private AutenticacionUtil util;

	public Administrador() {
		this.util = new AutenticacionUtil();
	}

    @Override
    public double getBonificacion(){
        return this.getSalario();
    }

	@Override
	public void setClave(String clave) {
		this.util.setClave(clave);
	}

	@Override
	public boolean iniciarSesion(String clave) {
		return this.util.iniciarSesion(clave);
	}
}
