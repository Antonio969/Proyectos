package com.mycompany.calculadorapolinomiocomplejo.Polinomios;

import java.util.Scanner;
import java.util.Random;

public class Polinomio {
	private Scanner S = new Scanner(System.in);
	private int[][] coef; //[rn, rd, ni, di]
	private int deg, mcd;
	private Random aux = new Random(); // 0-6 1-7
	private char rand;

	// Constructor que crea un polinomio
	public Polinomio (int deg){
		this.deg = deg;
		coef = new int[deg+1][4];
	}

	public void Nulo(){
		for (int i=0; i<=deg; i++){
			coef[i][0] = 0;
			coef[i][1] = 1;
			coef[i][2] = 0;
			coef[i][3] = 1;
		}
	}

	public void Unitario(){ // (x^n+...c)/1
		for (int i=0; i<deg; i++){
			coef[i][0] = 0;
			coef[i][1] = 1;
			coef[i][2] = 0;
			coef[i][3] = 1;
		}

		coef[0][0] = 1;
		coef[0][1] = 1;
		coef[0][2] = 1;
		coef[0][3] = 1;
	}

	public void Llenar (char rand){
		if (rand == "n".charAt(0)){
			for (int i=0; i<=this.deg; i++){
				System.out.println ("Ingresa el coeficiente real para el grado "+i);
				// do {
					System.out.print ("Ingresa el numerador: ");
					coef[i][0] = S.nextInt();
				// 	if (coef[i][0] >= 0){
				// 		break;
				// 	}
				// 	System.out.println ("Ingresa un numerador valido");
				// }while (coef[i][0] >= 0);

				do {
					System.out.print ("Ingresa el denominador: ");
					coef[i][1] = S.nextInt();
					if (coef[i][1] > 0){
						break;
					}
					System.out.println ("Ingresa un denominador valido");
				}while (coef[i][1] == 0);
				mcd = MCD(coef[i][0], coef[i][1]);
				coef[i][0] /= mcd;
				coef[i][1] /= mcd;

				System.out.println ("Ingresa el coeficiente complejo para el grado "+i);
				System.out.print ("Ingresa el numerador: ");
				coef[i][2] = S.nextInt();

				do {
					System.out.print ("Ingresa el denominador: ");
					coef[i][3] = S.nextInt();
					if (coef[i][3] == 0){
						System.out.println ("Ingresa un denominador valido: ");
						break;
					}
				}while (coef[i][3] == 0);
				mcd = MCD(coef[i][2], coef[i][3]);
				coef[i][2] /= mcd;
				coef[i][3] /= mcd;
			}
		} else {
			for (int i=0; i<=this.deg; i++){
				coef[i][0] = aux.nextInt(7); // 0-6
				coef[i][1] = aux.nextInt(6)+1; // 0-5+1
				mcd = MCD(coef[i][0], coef[i][1]);
				coef[i][0] /= mcd;
				coef[i][1] /= mcd;

				coef[i][2] = aux.nextInt(6);
				coef[i][3] = aux.nextInt(6)+1;
				mcd = MCD(coef[i][2], coef[i][3]);
				coef[i][2] /= mcd;
				coef[i][3] /= mcd;
			}
		}
	}

	public void Mostrar (){ // Raiz mostrar
		for (int i=deg; i>=0; i--){ // 2 -- 0
			if (coef[i][0] != 0 || coef[i][2] != 0){
				System.out.print("(");
				if (coef[i][0] == 0){
					System.out.print("");
				} else {
					System.out.print(coef[i][0]);
					if (coef[i][1] != 1) System.out.print("/"+coef[i][1]);
				}
				System.out.print("+");
				if (coef[i][2] == 0){
					System.out.print("");
				} else {
					System.out.print(coef[i][2]);
					if (coef[i][3] != 1) System.out.print("/"+coef[i][3]);
				}
				System.out.print("*i)");
				if (i != 0) System.out.print("x^"+(i)+"+ ");
			} else {
				System.out.print("");
			}
		}
	}

	public int getCoef (int deg, String comp){ // grado | pos 0nr 1dr 2ni 3di
		if (comp == "nr"){ return this.coef[deg][0]; }
		else if (comp == "dr"){ return this.coef[deg][1]; }
		else if (comp == "nc"){ return this.coef[deg][2]; }
		else if (comp == "dc"){ return this.coef[deg][3]; }
		else { return 0; }
	}

	public int[] getCoef (int deg){ // grado
		return this.coef[deg];
	}

	public void setCoef (int deg, String comp, int valor){ // grado | pos 0nr 1dr 2ni 3di | valor
		if (comp == "nr"){ coef[deg][0] = valor; }
		else if (comp == "dr"){ coef[deg][1] = valor; }
		else if (comp == "nc"){ coef[deg][2] = valor; }
		else if (comp == "dc"){ coef[deg][3] = valor; }
	}

	public void setCoef (int deg, int[] valor){ // grado coeficiente completo
		coef[deg][0] = valor[0];
		coef[deg][1] = valor[1];
		coef[deg][2] = valor[2];
		coef[deg][3] = valor[3];
	}

	public int getDeg(){
		return deg;
	}

	private int MCD(int num, int den){
		int u=Math.abs(num);
		int v=Math.abs(den);
		if(v==0){
			return u;
		}
		int r;
		while(v!=0){
			r=u%v;
			u=v;
			v=r;
		}
		return u;
	}
}
