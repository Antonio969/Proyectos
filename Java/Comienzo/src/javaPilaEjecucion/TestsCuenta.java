package javaPilaEjecucion;

public class TestsCuenta {
    public static void main(String[] args) {
        Cuenta cuenta = new Cuenta();
        try{
            cuenta.deposita();
        }catch(MiException e){
            e.printStackTrace();
        }
    }
}
