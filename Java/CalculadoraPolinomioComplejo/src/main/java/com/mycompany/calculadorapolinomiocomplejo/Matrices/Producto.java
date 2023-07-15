package com.mycompany.calculadorapolinomiocomplejo.Matrices;

import java.util.Vector;
import com.mycompany.calculadorapolinomiocomplejo.Polinomios.*;

public class Producto extends Metodos {
	//Vector<Polinomio_r> sum = new Vector<Polinomio_r>(); // Vector dinamico
	public Producto (Matriz m1, Matriz m2, int det, char rand){ // m1 m2 detalles random
		super(m1, m2, det, rand);
		if (m1.getDeg() != m2.getDeg()){
			System.out.println("No se puede multiplicar las matrices");
		}
	}

	public void Producto (){
		int degn, degd;

		if (det >= 1){
			System.out.println ("\n\nAhora se multiplicaran las matrices originales\n");
		}
		Continuar();

		for (int f=0; f<deg; f++){ // i
			for (int c=0; c<deg; c++){ // j
				coef[f][c] = new Polinomio_r(m1.getEnt(f,c).getNum().getDeg()+m1.getEnt(f,c).getNum().getDeg(), m1.getEnt(c,f).getNum().getDeg()+m1.getEnt(c,f).getNum().getDeg(), rand);
				coef[f][c].Nulo(); // Polinomio nulo
			}
		}

		for (int f=0; f<deg; f++){ // i
			for (int c=0; c<deg; c++){ // j
				for (int k=0; k<deg; k++){ // k
					if (k == 0) coef[f][c] = Pro_Pol_r ( m1.getEnt(f,k), m2.getEnt(k,c) ); // sum(Pol_r1*Pol_r2)
					if (k != 0) coef[f][c] = Sum_Pol_r (coef[f][c], Pro_Pol_r ( m1.getEnt(f,k), m2.getEnt(k,c) )); // sum(Pol_r1*Pol_r2)
				}
			}
		}

		System.out.print ("\n");
		System.out.println ("El resultado final es: ");
		Mostrar();
	}
}
