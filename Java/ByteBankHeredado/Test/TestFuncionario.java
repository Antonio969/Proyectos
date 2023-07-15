package ByteBankHeredado.Test;
import ByteBankHeredado.Modelo.*;
public class TestFuncionario {
    public static void main(String[] args) {
        Funcionario diego = new Contador();
        diego.setDocumento("Diego");
        diego.setDocumento("3553243");
        diego.setSalario(2000);

        System.out.println(diego.getSalario());

        System.out.println(diego.getBonificacion());


        
    }
}
