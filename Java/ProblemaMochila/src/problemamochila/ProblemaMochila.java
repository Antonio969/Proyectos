package problemamochila;

import java.util.Scanner;

public class ProblemaMochila {

    public static void main(String[] args) {
        int n=0,p=0;
        Scanner leer = new Scanner(System.in);
        System.out.println("Cantidad de elementos para llenar la mochila es:  ");
        n= leer.nextInt();     
        System.out.println("El peso maximo de la mochila es:  ");
        p= leer.nextInt();
        Elemento elementos[]= new Elemento[n];

        int peso, beneficio;
        for(int i=0;i<elementos.length;i++){
        System.out.println("Ingrese el peso del objeto: ");
        peso = leer.nextInt();
        System.out.println("Ingrese el beneficio del objeto: ");
        beneficio = leer.nextInt();
        elementos[i] = new Elemento(peso, beneficio);
        }
        System.out.println("Los elementos ingresados fueron: \n");
         for(int i=0;i<elementos.length;i++){
             System.out.println("Peso:"+elementos[i].getPeso()+" Beneficio:"+elementos[i].getBeneficio());
         }
         System.out.println("-------------------");
        Mochila m_base = new Mochila(p+1, elementos.length);
        Mochila m_opt = new Mochila(p+1, elementos.length);

        llenarMochila(m_base, elementos, false, m_opt);

        
        System.out.println(m_opt);
    }

    public static void llenarMochila(Mochila m_base, Elemento[] elementos, boolean llena, Mochila m_opt) {

        //si esta llena
        if (llena) {
            //compruebo si tiene mas beneficio que otra
            if (m_base.getBeneficio() > m_opt.getBeneficio()) {

                Elemento[] elementosMochBase = m_base.getElementos();
                m_opt.clear();

                //metemos los elementos
                for (Elemento e : elementosMochBase) {
                    if (e != null) {
                        m_opt.anadirElemento(e);
                    }

                }

            }

        } else {
            //Recorre los elementos
            for(int i = 0; i < elementos.length; i++) {
                //si existe el elemento
                if (!m_base.existeElemento(elementos[i])) {
                    //Si el peso de la mochila se supera, indicamos que esta llena
                    if (m_base.getPesoMaximo() > m_base.getPeso() + elementos[i].getPeso()) {
                        m_base.anadirElemento(elementos[i]); //añadimos
                        llenarMochila(m_base, elementos, false, m_opt);
                        m_base.eliminarElemento(elementos[i]); // lo eliminamos
                    } else {
                        llenarMochila(m_base, elementos, true, m_opt);
                    }

                }

            }

        }

    }

}
