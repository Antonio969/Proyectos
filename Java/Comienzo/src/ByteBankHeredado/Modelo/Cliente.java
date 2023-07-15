package ByteBankHeredado.Modelo;

public class Cliente implements Autenticable {
    private String nombre;
    private String documento;
    private String telefono;

    private AutenticacionUtil util;

    private String clave;

    public Cliente(){
        this.util = new AutenticacionUtil();
    }


    public String getTelefono() {
        return telefono;
    }
    public String getDocumento() {
        return documento;
    }
    public String getNombre() {
        return nombre;
    }
    public void setDocumento(String documento) {
        this.documento = documento;
    }
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
    public void setTelefono(String telefono) {
        this.telefono = telefono;
    }
	@Override
	public void setClave(String clave) {
		this.clave = clave;
    }
	@Override
	public boolean iniciarSesion(String clave) {
		return this.clave == clave;
	}
}
