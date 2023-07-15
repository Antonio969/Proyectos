package com.mycompany.calculadorapolinomiocomplejo.Matrices;
import com.mycompany.calculadorapolinomiocomplejo.Polinomios.*;

public class Suma extends Metodos{
	public Suma (Matriz m1, Matriz m2, int det, char rand){ // Suma
		super (m1, m2, det, rand);
		if (m1.getDeg() != m2.getDeg()){
			System.out.println("No se pueden sumar las matrices");
		}
	}

	public void Sumar (){
		Polinomio_r aux;
		if (det >= 1){
			System.out.println ("\n\nSe sumaran las matrices originales\n");
		}
		Continuar();

		for (int f=0; f<deg; f++){ // i
			for (int c=0; c<deg; c++){ // j
				aux = Sum_Pol_r( m1.getEnt(f,c), m2.getEnt(f,c) ); // Pol_r1 + Pol_r2
				coef[f][c] = new Polinomio_r( aux.getNum().getDeg(),  aux.getDen().getDeg(), rand);
				coef[f][c] = aux;
			}
		}

		if (det >= 1){
			System.out.print ("\n");
			System.out.println ("El resultado final es: ");
			Mostrar();
		}
	}
}