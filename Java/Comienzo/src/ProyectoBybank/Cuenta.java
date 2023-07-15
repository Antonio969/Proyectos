package ProyectoBybank;


class Cuenta {
    double saldo;
    int agencia;
    private int numero;
    private Cliente titular = new Cliente();
    
    // static hace que la variable no sea de la instancia, sera de la clase 
    private static int total = 0;

    // El nombre de este metodo se denomina constructor
    public Cuenta(){

    }
    public Cuenta(int agencia){
        
        if (agencia <= 0){
            System.out.println("No se permite el valor 0");
            this.agencia = 1;
        }else{
            this.agencia = agencia;
        }
        total++;

        System.out.println("Se van creando: " + total + " cuentas");
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
    public boolean transferir(double valor,
                             Cuenta cuenta){
        if (this.saldo >= valor){
            this.saldo -= valor;
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
