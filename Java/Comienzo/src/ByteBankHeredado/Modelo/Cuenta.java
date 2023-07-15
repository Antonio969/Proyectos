package ByteBankHeredado.Modelo;


// Generar Javadoc
// esprotar .jar


/**
 * Cuenta va a crear instancias de cuenta corriente
 * @version 1.0
 * @author AntoioBarreto
 * 
 */


public abstract class Cuenta {
 // No se pueden instanciar clases abstractas
 // public      // Accesible desde cualquier parte
 // --default   // Accesible dentro del paquete
 // --protected // default + clases hijas
 // ---private  // solo desde la misma clase

    protected double saldo;
    private int agencia = 1;
    private int numero;
    private Cliente titular = new Cliente();
    
    // static hace que la variable no sea de la instancia, sera de la clase 
    private static int total = 0;

    // El nombre de este metodo se denomina constructor
    
    public Cuenta(int agencia, int numero){
        /* 
        if (agencia <= 0){
            System.out.println("No se permite el valor 0");
            this.agencia = 1;
        }else{
            this.agencia = agencia;
        }*/
        this.agencia = agencia;
        this.numero = numero;
        System.out.println("Estoy creando una cuenta");

        Cuenta.total++;

        
    }
    // Public es un modificador de acceso
    // No retorna valor
    public void depositar(double valor){
        // Esta cuenta  Esta cuenta 
        // this object  
        this.saldo         +=  valor;
    }
    // Retorna valor 
    public boolean retirar(double valor){
        if(this.saldo >= valor){
            this.saldo -= valor;
            return true;
        }
        return false;
        
    }
    public abstract void deposita(double valor);
    
    public void saca(double valor) throws SaldoInsuficienteException {
        if(this.saldo < valor){
            throw new SaldoInsuficienteException("No tienes saldo");
        }else{
            this.saldo -= valor;
        }
    }


    public boolean transferir(double valor,
                             Cuenta cuenta){
        if (this.saldo >= valor){
            try {
                this.saca(valor);
            } catch (SaldoInsuficienteException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            }
            cuenta.depositar(valor);
            return true;
        }else{
            return false;
        }
                           
    }

    



    public double getSaldo(){
        return this.saldo;
    }
    // Si se elimina el metodo set agencia el campo queda aislado y solo es manipulable al momento de la creacion
    public void setAgencia (int agencia){
        
        if (agencia > 0 ){
            this.agencia = agencia;
        }else{
            System.out.println("No estan permitidos valores negativos");
        }
            
    }

    public int getAgencia() {
        return agencia;
    }

    public void setTitular(Cliente titular) {
        this.titular = titular;
    }

    public Cliente getTitular() {
        return titular;
    }

    public static int getTotal(){
        return Cuenta.total;
    }
}
