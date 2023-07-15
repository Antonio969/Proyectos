package ByteBankHeredado.Test;
import ByteBankHeredado.Modelo.*;
public class TEstSistemainterno {
    public static void main(String[] args) {
        Sistemainterno sistema = new Sistemainterno();
        Gerente gerente1 = new Gerente();
        Administrador admin = new Administrador();

        sistema.autentica(gerente1);
        sistema.autentica(admin);
    }
}
