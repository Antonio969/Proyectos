package com.mycompany.calculadorapolinomiocomplejo.Matrices;

import java.lang.Math;
import java.util.Scanner;
import com.mycompany.calculadorapolinomiocomplejo.Polinomios.*;

public abstract class Metodos {
	protected Scanner S = new Scanner(System.in);
	protected int deg, det, mcd;
	protected char rand;
	protected Polinomio_r[][] coef;
	protected Matriz m1, m2;

	public Metodos (Matriz m1, Matriz m2, int det, char rand){ // m1, m2, detalles, random
		this.rand = rand;
		this.det = det;
		deg = m1.getDeg();
		coef = new Polinomio_r[deg][deg];
		this.m1 = m1;
		this.m2 = m2;
	}
	public Metodos (int deg, char rand){
		this.rand = rand;
		det = 1;
		this.deg = deg;
		coef = new Polinomio_r[deg][deg];
	}

	protected Polinomio_r Sum_Pol_r (Polinomio_r p1, Polinomio_r p2){
		int degn, degd;
		degn = p1.getNum().getDeg()+p2.getDen().getDeg();
		degd = p1.getDen().getDeg()+p2.getDen().getDeg();

		Polinomio_r res = new Polinomio_r(degn, degd, rand); // Polinomio nulo para resultado
		res.Nulo();
		Polinomio pn1 = p1.getNum(); // Numerador Polinomio 1
		Polinomio pd1 = p1.getDen(); // Denominador Polinomio 1
		Polinomio pn2 = p2.getNum(); // Numerador Polinomio 2
		Polinomio pd2 = p2.getDen(); // Denominador Polinomio 2

		if (det >= 2){
			System.out.println ("Se sumaran: ");
			p1.Mostrar();
			System.out.print (" + ");
			p2.Mostrar();
			System.out.print ("\n");
			Continuar();
		}

		// Numerador resultado
		for (int i=2; i>=0; i--){
			// Suma reales
			res.setNum(Sum_Pol( Pro_Pol(pn1, pd2), Pro_Pol(pd1, pn2) )); // pn1*pd2 + pd1*pn2
			res.setDen(Pro_Pol(pd1, pd2)); // pd2*pd2
		}

		return res;
	}
	protected Polinomio_r Res_Pol_r (Polinomio_r p1, Polinomio_r p2){
		int degn, degd;
		degn = p1.getNum().getDeg()+p2.getDen().getDeg();
		degd = p1.getDen().getDeg()+p2.getDen().getDeg();

		Polinomio_r res = new Polinomio_r(degn, degd, rand); // Polinomio nulo para resultado
		res.Nulo();
		Polinomio pn1 = p1.getNum(); // Numerador Polinomio 1
		Polinomio pd1 = p1.getDen(); // Denominador Polinomio 1
		Polinomio pn2 = p2.getNum(); // Numerador Polinomio 2
		Polinomio pd2 = p2.getDen(); // Denominador Polinomio 2

		// Numerador resultado
		for (int i=2; i>=0; i--){
			// Suma reales
			res.setNum(Res_Pol( Pro_Pol(pn1, pd2), Pro_Pol(pd1, pn2) )); // pn1*pd2 - pd1*pn2
			res.setDen(Pro_Pol(pd1, pd2)); // pd2*pd2
		}

		return res;
	}
	protected Polinomio_r Pro_Pol_r (Polinomio_r p1, Polinomio_r p2){
		int degn, degd;
		degn = p1.getNum().getDeg()+p2.getNum().getDeg();
		degd = p1.getDen().getDeg()+p2.getDen().getDeg();

		Polinomio_r paux = new Polinomio_r(degn, degd, rand); // Polinomio nulo de n*m coef
		paux.Nulo();
		int[] coef1 = new int[4]; // Coeficiente 1
		int[] coef2 = new int[4]; // Coeficiente 2
		int[] aux = new int[4]; // auxiliar de sumas

		// Producto de polinomios numeradores
		for (int i=p1.getNum().getDeg(); i>=0; i--){ // Contador grado p1
			coef1[0] = p1.getNum().getCoef(i, "nr");
			coef1[1] = p1.getNum().getCoef(i, "dr");
			coef1[2] = p1.getNum().getCoef(i, "nc");
			coef1[3] = p1.getNum().getCoef(i, "dc");
			for (int j=p2.getNum().getDeg(); j>=0; j--){ // Contador grado p2
				coef2[0] = p2.getNum().getCoef(j, "nr");
				coef2[1] = p2.getNum().getCoef(j, "dr");
				coef2[2] = p2.getNum().getCoef(j, "nc");
				coef2[3] = p2.getNum().getCoef(j, "dc");

				aux = Pro_Coef (coef1, coef2); // Multiplicamos coeficientes
				if (paux.getNum().getCoef(i+j)[0] == 0 && paux.getNum().getCoef(i+j)[1] == 0 && paux.getNum().getCoef(i+j)[2] == 0 && paux.getNum().getCoef(i+j)[3] == 0){
					paux.getNum().setCoef(i+j, aux );
				} else {
					try {
						paux.getNum().setCoef(i+j, Sum_Coef(aux, paux.getNum().getCoef(i+j)) );
					} catch (Exception e){
						try {
							paux.getNum().setCoef(i+j, aux );
						} catch (Exception f){
							paux.getNum().setCoef(i+j, paux.getNum().getCoef(i+j) );
						}
					}
				}
			}
		}

		// Producto de polinomios numeradores
		for (int i=p1.getDen().getDeg(); i>=0; i--){ // Contador grado p1
			coef1[0] = p1.getDen().getCoef(i, "nr");
			coef1[1] = p1.getDen().getCoef(i, "dr");
			coef1[2] = p1.getDen().getCoef(i, "nc");
			coef1[3] = p1.getDen().getCoef(i, "dc");
			for (int j=p2.getDen().getDeg(); j>=0; j--){ // Contador grado p2
				coef2[0] = p2.getDen().getCoef(j, "nr");
				coef2[1] = p2.getDen().getCoef(j, "dr");
				coef2[2] = p2.getDen().getCoef(j, "nc");
				coef2[3] = p2.getDen().getCoef(j, "dc");

				aux = Pro_Coef (coef1, coef2); // Multiplicamos coeficientes
				if (paux.getDen().getCoef(i+j)[0] == 0 && paux.getDen().getCoef(i+j)[1] == 0 && paux.getDen().getCoef(i+j)[2] == 0 && paux.getDen().getCoef(i+j)[3] == 0){
					paux.getDen().setCoef(i+j, aux );
				} else {
					try {
						paux.getDen().setCoef(i+j, Sum_Coef(aux, paux.getDen().getCoef(i+j)) );
					} catch (Exception e){
						try {
							paux.getDen().setCoef(i+j, aux );
						} catch (Exception f){
							paux.getDen().setCoef(i+j, paux.getDen().getCoef(i+j) );
						}
					}
				}
			}
		}
		return paux;
	}

	protected Polinomio Sum_Pol (Polinomio p1, Polinomio p2){
		Polinomio res; // Polinomio nulo para resultado

		int initsuma = (p1.getDeg() != p2.getDeg())? Math.abs(p1.getDeg()-p2.getDeg()) : p2.getDeg();

		if (p1.getDeg() != p2.getDeg()){
			int max = (p1.getDeg() < p2.getDeg()) ? p2.getDeg() : p1.getDeg(); // Grado mas alto
			int min = (max == p1.getDeg()) ? p2.getDeg() : p1.getDeg();// Grado menor
			res = new Polinomio(max);
			res.Nulo();
			for (int i=max-1; i>min-1; i--){ // 4 3 2
				if (p1.getDeg() > p2.getDeg()) res.setCoef(i, p1.getCoef(i) );
				if (p1.getDeg() < p2.getDeg()) res.setCoef(i, p2.getCoef(i) );
			}
		} else {
			res = new Polinomio(p1.getDeg());
			res.Nulo();
		}

		for (int i=initsuma; i>=0; i--){ // Contador de grados 2 1 0
			try {
				res.setCoef(i, Sum_Coef(p1.getCoef(i), p2.getCoef(i)) );
			} catch (Exception e){
				try {
					res.setCoef(i, p1.getCoef(i) );
				} catch (Exception f){
					res.setCoef(i, p2.getCoef(i) );
				}
			}
		}

		return res;
	}
	protected Polinomio Res_Pol (Polinomio p1, Polinomio p2){
		Polinomio res; // Polinomio nulo para resultado

		int initsuma = (p1.getDeg() != p2.getDeg())? Math.abs(p1.getDeg()-p2.getDeg()) : p2.getDeg();

		if (p1.getDeg() != p2.getDeg()){
			int max = (p1.getDeg() < p2.getDeg()) ? p2.getDeg() : p1.getDeg(); // Grado mas alto
			int min = (max == p1.getDeg()) ? p2.getDeg() : p1.getDeg();// Grado menor
			res = new Polinomio(max);
			res.Nulo();
			for (int i=max-1; i>min-1; i--){ // 4 3 2
				if (p1.getDeg() > p2.getDeg()) res.setCoef(i, p1.getCoef(i) );
				if (p1.getDeg() < p2.getDeg()) res.setCoef(i, p2.getCoef(i) );
			}
		} else {
			res = new Polinomio(p1.getDeg());
			res.Nulo();
		}

		for (int i=initsuma; i>=0; i--){ // Contador de grados 2 1 0
			try {
				res.setCoef(i, Res_Coef(p1.getCoef(i), p2.getCoef(i)) );
			} catch (Exception e){
				try {
					res.setCoef(i, p1.getCoef(i) );
				} catch (Exception f){
					res.setCoef(i, p2.getCoef(i) );
				}
			}
		}

		return res;
	}
	protected Polinomio Pro_Pol (Polinomio p1, Polinomio p2){
		Polinomio paux = new Polinomio(p1.getDeg()+p2.getDeg()); // Polinomio vacio de n*m coef
		paux.Nulo();
		int[] coef1 = new int[4]; // Coeficiente 1
		int[] coef2 = new int[4]; // Coeficiente 2
		int[] aux = new int[4]; // axiliar de sumas

		for (int i=p1.getDeg(); i>=0; i--){ // Contador grado p1
			coef1[0] = p1.getCoef(i, "nr");
			coef1[1] = p1.getCoef(i, "dr");
			coef1[2] = p1.getCoef(i, "nc");
			coef1[3] = p1.getCoef(i, "dc");
			for (int j=p2.getDeg(); j>=0; j--){ // Contador grado p2
				if (det == 3) System.out.println("El grado es: "+(i+j));
				coef2[0] = p2.getCoef(j, "nr");
				coef2[1] = p2.getCoef(j, "dr");
				coef2[2] = p2.getCoef(j, "nc");
				coef2[3] = p2.getCoef(j, "dc");

				aux = Pro_Coef (coef1, coef2); // Multiplicamos coeficientes
				if (paux.getCoef(i+j)[0] == 0 && paux.getCoef(i+j)[1] == 0 && paux.getCoef(i+j)[2] == 0 && paux.getCoef(i+j)[3] == 0){
					paux.setCoef(i+j, aux );
				} else {
					try {
						paux.setCoef(i+j, Sum_Coef(aux, paux.getCoef(i+j)) );
					} catch (Exception e){
						try {
							paux.setCoef(i+j, aux );
						} catch (Exception f){
							paux.setCoef(i+j, paux.getCoef(i+j) );
						}
					}
				}
			}
		}
		return paux;
	}

	public Polinomio_r Det (Matriz A){
		if (A.getDeg() != 2){
			Matriz madjunta = new Matriz(A.getDeg()-1, 10, 10, rand); // Matriz de orden -1
			madjunta.Nula();

			for(int j=1; j<A.getDeg(); j++){
				for (int k=1; k<A.getDeg(); k++){
					madjunta.setEnt(j-1, k-1, new Polinomio_r(A.getEnt(j,k).getNum().getDeg(), A.getEnt(j,k).getDen().getDeg(), rand) );
					madjunta.setEnt(j-1, k-1, coef[j][k]);
				}
			}

			return Pro_Pol_r(coef[0][0], Det(madjunta)); // (0,0)*(1,1)*4
		} else {
			System.out.println("El determinante es:");
			Continuar();
			return Res_Pol_r( Pro_Pol_r(A.getEnt(0,0), A.getEnt(1,1)), Pro_Pol_r(A.getEnt(0,1), A.getEnt(1,0)) );
		}

		// for (int i=0; i<deg-1; i++){
		// 	for (int j=0; j<deg-1; j++){
		// 		System.out.println("["+i+"]["+j+"]");
		// 		madjunta[i][j].getNum().Mostrar();
		// 		System.out.print(" / ");
		// 		madjunta[i][j].getDen().Mostrar();
		// 		System.out.print("\n");
		// 	}
		// }
	}

	protected int[] Pro_Coef ( int[] c1, int[] c2 ){ // (a/b + c/d)(e/f + g/h)
		int[] aux = new int[4]; // Coef final
		int[] aux1 = new int[2]; // Coef parcial
		int[] aux2 = new int[2]; // Coef parcial

		aux1 = Pro_Frac (c1[0], c1[1], c2[0], c2[1]); // a/b * e/f = ae / bf
		aux2 = Pro_Frac (c1[2], c1[3], c2[2], c2[3]); // (c/d*i * g/h*i) = -cg / dh
		aux1 = Res_Frac (aux1, aux2); // j / k
		aux[0] = aux1[0]; // j
		aux[1] = aux1[1]; // k

		aux1 = Pro_Frac (c1[2], c1[3], c2[0], c2[1]); // c/d i* e/f = ce / df i
		aux2 = Pro_Frac (c1[0], c1[1], c2[2], c2[3]); // a/b * g/h i = ag / bh i
		aux1 = Sum_Frac (aux1, aux2); // l / m
		aux[2] = aux1[0]; // l
		aux[3] = aux1[1]; // m

		if (det == 3){
			System.out.println ("Se multiplican: ");
			System.out.print ("("+c1[0]+"/"+c1[1]+"+"+c1[2]+"/"+c1[3]+")("+c2[0]+"/"+c2[1]+"+"+c2[2]+"/"+c2[3]+")");
			System.out.println (" = ("+aux[0]+"/"+aux[1]+" + "+aux[2]+"/"+aux[3]+")");
			Continuar();
		}

		return aux; // j, k, l, m
	}
	protected int[] Sum_Coef ( int[] c1, int[] c2 ){ //(a/b + c/d)+(e/f + g/h)i
		int[] aux = new int[4]; // Coef final
		int[] aux1 = new int[2]; // Coef parcial
		int[] aux2 = new int[2]; // Coef parcial

		aux1[0] = c1[0];
		aux1[1] = c1[1];
		aux2[0] = c2[0];
		aux2[1] = c2[1];

		aux1 = Sum_Frac (aux1, aux2); // a/b + e/f = a/b
		aux[0] = aux1[0];
		aux[1] = aux1[1];

		aux1[0] = c1[2];
		aux1[1] = c1[3];
		aux2[0] = c2[2];
		aux2[1] = c2[3];
		aux2 = Sum_Frac (aux1, aux2); // c/d + g/h
		//aux1 = Sum_Frac (aux1, aux2); // j / k
		aux[2] = aux2[0]; // j
		aux[3] = aux2[1]; // k

		if (det == 3){
			System.out.println (" Se suman: ");
			System.out.print ("("+c1[0]+"/"+c1[1]+" + "+c1[2]+"/"+c1[3]+") + ("+c2[0]+"/"+c2[1]+" + "+c2[2]+"/"+c2[3]+")");
			System.out.println (" = ("+aux[0]+"/"+aux[1]+" + "+aux[2]+"/"+aux[3]+")");
			Continuar();
		}

		return aux; // j, k, l, m
	}
	protected int[] Res_Coef ( int[] c1, int[] c2 ){ //(a/b + c/d)+(e/f + g/h)i
		int[] aux = new int[4]; // Coef final
		int[] aux1 = new int[2]; // Coef parcial
		int[] aux2 = new int[2]; // Coef parcial

		aux1[0] = c1[0];
		aux1[1] = c1[1];
		aux2[0] = c2[0];
		aux2[1] = c2[1];

		aux1 = Res_Frac (aux1, aux2); // a/b - e/f = a/b
		aux[0] = aux1[0];
		aux[1] = aux1[1];

		aux1[0] = c1[2];
		aux1[1] = c1[3];
		aux2[0] = c2[2];
		aux2[1] = c2[3];
		aux2 = Res_Frac (aux1, aux2); // c/d - g/h
		//aux1 = Sum_Frac (aux1, aux2); // j / k
		aux[2] = aux2[0]; // j
		aux[3] = aux2[1]; // k

		if (det == 3){
			System.out.println (" Se restaran: ");
			System.out.print ("("+c1[0]+"/"+c1[1]+" + "+c1[2]+"/"+c1[3]+") + ("+c2[0]+"/"+c2[1]+" + "+c2[2]+"/"+c2[3]+")");
			System.out.println (" = ("+aux[0]+"/"+aux[1]+" + "+aux[2]+"/"+aux[3]+")");
			Continuar();
		}

		return aux; // j, k, l, m
	}

	protected int[] Sum_Frac (int[] f1, int[] f2){ // a/b + c/d
		int[] sum = new int[2];
		sum[0] = (f1[0]*f2[1])+(f1[1]*f2[0]); // a*d + b*c
		sum[1] = f1[1]*f2[1]; // d*b

		mcd = MCD(sum[0], sum[1]);
		sum[0] /= mcd;
		sum[1] /= mcd;
		return sum; // a / b
	}
	protected int[] Res_Frac (int[] f1, int[] f2){ // n1/d1 + n2/d2
		int[] sum = new int[2];
		sum[0] = (f1[0]*f2[1])-(f1[1]*f2[0]);
		sum[1] = f1[1]*f2[1];

		mcd = MCD(sum[0], sum[1]);
		sum[0] /= mcd;
		sum[1] /= mcd;
		return sum; // a / b
	}
	protected int[] Pro_Frac (int n1, int d1, int n2, int d2){ // n1/d1 * n2/d2
		int[] pro = new int[2];
		pro[0] = n1*n2;
		pro[1] = d1*d2;

		mcd = MCD(pro[0], pro[1]);
		pro[0] /= mcd;
		pro[1] /= mcd;
		return pro; // a / b
	}

	protected int MCD(int num, int den){
		int u=Math.abs(num);
		int v=Math.abs(den);
		if(v==0 || u==0){
			return 1;
		}
		int r;
		while(v!=0){
			r=u%v;
			u=v;
			v=r;
		}
		return u;
	}

	public void Mostrar(){
		for (int i=0; i<deg; i++){
			for (int j=0; j<deg; j++){
				System.out.print("["+(i+1)+","+(j+1)+"] -> ");
				coef[i][j].Mostrar();
			}
		}
	}

	public static void Continuar(){
		Scanner S = new Scanner(System.in);
		System.out.print ("Presione entre para continuar ");
		S.nextLine();
	}
}
