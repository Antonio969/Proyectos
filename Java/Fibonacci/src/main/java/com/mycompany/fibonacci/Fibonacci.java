/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.fibonacci;

import java.util.Scanner;

/**
 *
 * @author antoniob
 */
public class Fibonacci {

   
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("termino de la sucesion: ");
        int m = scan.nextInt();
        Fibonacci objsuc = new Fibonacci();
        objsuc.fibonaccirecursivo(m);
        System.out.println("El termino " +m+" por un metodo recursivo es: "+objsuc.fibonaccirecursivo(m));
        System.out.println("El termino " +m+" por un metodo ciclos es: "+objsuc.fibonacciciclo(m));
    }
    //Creando el metodo recursivo pa la sucesion
    public int fibonaccirecursivo(int n){
        if (n==1|| n==2){
            //Caso base (Respuesta explicita)
            return 1;
        }else{
            //dominio(problema -1)
            return fibonaccirecursivo(n-1)+ fibonaccirecursivo(n-2);
        }
    }
    //Creando un metodo por ciclo
    public int fibonacciciclo(int n){
        int fibo=0, primero =1, segundo =0; 
        while(n>0){
            fibo=primero + segundo;
            primero=segundo;
            segundo = fibo;
            n--;
        }
        return fibo;
    }
}
