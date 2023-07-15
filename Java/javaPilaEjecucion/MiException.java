package javaPilaEjecucion;
// EXcepciones verificadas y no verificadas
// Codigo del JVM
// Jerarquia de escepciones en Java
// No se puede extender de Throwable, ni de exception
public class MiException extends Exception {
    public MiException() {
        super();
    }

    public MiException(String message){
        super(message);
    }
}
