package ByteBankHeredado.Test;

public class TestGerente {
    public static void main(String[] args) {
       ByteBankHeredado.Modelo.Gerente gerente = new ByteBankHeredado.Modelo.Gerente();
        // Funcionario gerente = new Funcionario();
       gerente.setSalario(6000);
       gerente.setClave("AguacateMagico");
       gerente.setTipo(1);

       System.out.println(gerente.getBonificacion());
        System.out.println(gerente.iniciarSesion("AguacateMagico"));

    }
}
