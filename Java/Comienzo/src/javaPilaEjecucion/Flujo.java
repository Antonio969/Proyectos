package javaPilaEjecucion;

public class Flujo {
    public static void main(String[] args) {
        System.out.println("Inicio main");
        try {
            metodo1();
        } catch (Exception e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
        System.out.println("Fin main");
    
    }

    private static void metodo1 () throws MiException{
        System.out.println("Inicio metodo1");
        /* try{
            metodo2();
        }catch(NullPointerException me){
            me.printStackTrace();
        } */
        metodo2();
            
        System.out.println("Fin metodo 1");
    
    }

    private static void metodo2 () throws MiException{
        System.out.println("Inicio metodo2");
        int n = 50/0;
        Cuenta c = null;
        throw new MiException("Mi exception fue lanzada");
    }
}
