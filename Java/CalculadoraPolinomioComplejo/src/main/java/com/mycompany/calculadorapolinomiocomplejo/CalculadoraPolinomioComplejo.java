/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.calculadorapolinomiocomplejo;

import java.util.Scanner;
import java.util.Random;
import com.mycompany.calculadorapolinomiocomplejo.Polinomios.*;
import com.mycompany.calculadorapolinomiocomplejo.Matrices.*;

/**
 *
 * @author antoniob
 */
public class CalculadoraPolinomioComplejo {

    public static void main(String[] args) {
        Scanner S = new Scanner(System.in);
		int det = 0;
		int deg = 0;
		char rand = 0;
		Random aux = new Random();

		do {
			try {
				System.out.print ("Que grado de detalle quieres ver [1-3]: ");
				det = S.nextInt();
			} catch (Exception e){
				System.out.println ("Ingresa un valor valido");
				det = 0;
				S.nextLine();
			}
		} while (det<=0 || det>=4);

		S.nextLine();
		do {
			System.out.print ("Quieres que el programa genere elementos aleatorios [s/n]: ");
			rand = S.nextLine().charAt(0);
		} while (rand!="s".charAt(0) && rand!="n".charAt(0));
		if (rand == "s".charAt(0)) System.out.println ("El grado maximo de los polinomios sera de 2");

		do {
			try {
				if (rand == "n".charAt(0)){
					do {
						System.out.print ("Cual es el tamaño de la matriz: ");
						deg = S.nextInt();
						if (deg<2) System.out.println ("Las matrices deben ser de orden mayor o igual a 2");
					} while (deg < 2);
				}
				if (rand == "s".charAt(0)) deg = 2; //deg = aux.nextInt(3)+1; // 0-2+1
				if (rand == "s".charAt(0)) System.out.println ("El tamaño de la matriz es de: "+deg);
			} catch (Exception e) {
				System.out.println("Eso no es un numero");
				deg = 0;
				S.nextLine();
			}
		} while (deg == 0);

		Metodos.Continuar();

		System.out.println("Se crea la matriz 1");
		Matriz m1 = new Matriz(deg, rand); // Matrices simples
		m1.Llenar();
		System.out.println("\nSe crea la matriz 2");
		Matriz m2 = new Matriz(deg, rand); // Matrices simples
		m2.Llenar();

		System.out.println("Matriz 1");
		m1.Mostrar();
		System.out.println("\nMatriz 2");
		m2.Mostrar();

		Suma m3 = new Suma(m1, m2, det, rand); // Matriz suma
		m3.Sumar();
		Producto m4 = new Producto(m1, m2, det, rand);
		m4.Producto();
		System.out.print("\n");

		m1.Det(m1).Mostrar();
		System.out.print("\n");
		//main.Sum_M (matriz1, matriz2, matrizr);
    }
}
