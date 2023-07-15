package com.mycompany.calculadorapolinomiocomplejo.Matrices;

import com.mycompany.calculadorapolinomiocomplejo.Polinomios.*;

public class Matriz extends Metodos {
	//private Polinomio_r[][] coef; // Polinomios racionales
	//private int deg;

	public Matriz (int deg, int dn, int dd, char rand){ // Orden de la matriz
		super (deg, rand);
		for (int i=0; i<deg; i++){
			for (int j=0; j<deg; j++){
				coef[i][j] = new Polinomio_r(dn, dd, rand); // Polinomio racional nulo
			}
		}
	}
	public Matriz (int deg, char rand){ // Orden de la matriz
		super (deg, rand);
		//this.deg = deg;
		//coef = new Polinomio_r[deg][deg]; // Instanciar el vector
		for (int i=0; i<deg; i++){
			for (int j=0; j<deg; j++){
				coef[i][j] = new Polinomio_r(rand); // Polinomio racional nulo
			}
		}
	}

	public void Nula(){
		for (int i=0; i<deg; i++){
			for (int j=0; j<deg; j++){
				coef[i][j].Nulo(); // Coef = polinomio racional
			}
		}
	}

	public void Llenar(){
		for (int i=0; i<deg; i++){
			for (int j=0; j<deg; j++){
				System.out.println ("Se leera la entrada ["+(i+1)+","+(j+1)+"]");
				coef[i][j].Llenar(); // Matriz aleatoria
			}
		}
	}

	public int getDeg(){
		return deg;
	}

	public Polinomio_r getEnt (int i, int j){
		return coef[i][j];
	}

	public void setEnt (int i, int j, Polinomio_r a){
		coef[i][j] = a;
	}

	@Override
	public void Mostrar(){
		for (int i=0; i<deg; i++){
			for (int j=0; j<deg; j++){
				System.out.print("["+(i+1)+","+(j+1)+"] -> ");
				coef[i][j].Mostrar();
			}
		}
	}
}
