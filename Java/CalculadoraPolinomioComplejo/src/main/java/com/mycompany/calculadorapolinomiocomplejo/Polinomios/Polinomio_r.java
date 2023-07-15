package com.mycompany.calculadorapolinomiocomplejo.Polinomios;
import java.util.Scanner;
import java.util.Random;

public class Polinomio_r {
	private Polinomio P1;
	private Polinomio P2;
	protected Scanner S = new Scanner(System.in);
	private Random aux = new Random(); // 0-6 1-7
	protected char rand;

	// Crear 2 polinomios
	public Polinomio_r (char rand){
		this.rand = rand;
		int deg1 = -1, deg2 = 0;
		do{
			System.out.print("Grado del poliniomio numerador: ");
			// if (rand == "n".charAt(0)) System.out.print("\nGrado del poliniomio numerador: ");
			try{
				deg1 = S.nextInt();
				//if (rand == "n".charAt(0)) deg1 = S.nextInt();
				//if (rand == "s".charAt(0)) deg1 = aux.nextInt(3); // Grado aleatorio 0-n
			} catch (Exception e){
				S.nextLine();
			}
		} while (deg1 < 0);
		P1 = new Polinomio (deg1);

		do{
			System.out.print("Grado del poliniomio denominador: ");
			// if (rand == "n".charAt(0)) System.out.print("\nGrado del poliniomio denominador: ");
			try{
				deg2 = S.nextInt();
				// if (rand == "n".charAt(0)) deg2 = S.nextInt();
				// if (rand == "s".charAt(0)) deg2 = aux.nextInt(1)+1; // Grado aleatorio 1 - n+1
			} catch (Exception e){
				S.nextLine();
			}
		} while (deg2 <= 0);
		P2 = new Polinomio (deg2);
	}
	public Polinomio_r (int deg1, int deg2, char rand){ // Constructor vacio
		this.rand = rand;
		P1 = new Polinomio (deg1);
		P2 = new Polinomio (deg2);
	}
	// Crear un poliniomio con 2 polinomios
	public Polinomio_r (Polinomio p1, Polinomio p2){
		P1 = p1;
		P2 = p2;
	}

	public void Llenar(){
		System.out.println("Se va a leer el polinomio numerador");
		P1.Llenar(rand);
		System.out.println("Se va a leer el polinomio denominador");
		P2.Llenar(rand);
	}

	public void Nulo(){
		P1.Nulo(); // 0
		P2.Unitario(); // 1
	}

	public void Mostrar (){
		P1.Mostrar();
		System.out.print(" / ");
		P2.Mostrar();
		System.out.print("\n");
	}

	public Polinomio getNum (){
		return P1;
	}

	public Polinomio getDen (){
		return P2;
	}

	public void setNum (Polinomio pol){
		P1 = pol;
	}

	public void setDen (Polinomio pol){
		P2 = pol;
	}

	public void Vaciar(){
		P1.Nulo();
		P2.Nulo();
	}
}
