package ProyectoBybank;

public class Cliente {
    private String nombre;
    private String documento;
    private String telefono;

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
}
