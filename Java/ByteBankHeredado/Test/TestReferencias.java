package ByteBankHeredado.Test;
import ByteBankHeredado.Modelo.*;
public class TestReferencias {
    public static void main(String[] args) {
        // El elemento mas generico puede ser adaptado al elemento mas especifico 
        Funcionario funcionario = new Gerente();
        funcionario.setNombre("Marco");

        Gerente gerente =  new Gerente();
        gerente.setNombre("Ximena");

        funcionario.setSalario(2000);
        gerente.setSalario(10000);

        



    }
}
