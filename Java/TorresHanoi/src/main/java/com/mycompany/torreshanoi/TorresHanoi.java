/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.torreshanoi;

import java.util.Scanner;

/**
 *
 * @author antoniob
 */
public class TorresHanoi {

   /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       Scanner scan = new Scanner(System.in);
       System.out.println("Cuantos discos?: ");
       int m = scan.nextInt();
       TorresHanoi obj = new TorresHanoi();
       obj.torresHanoi(m, 1, 2, 3);
    }
    //Creando el metodo recursivo para solucioniar las Torres de Hanoi
    public void torresHanoi(int discos, int torre1, int torre2, int torre3){
        //Caso base
        if(discos==1){
            System.out.println("Mover disco de Torre "+ torre1+" a torre "+ torre3);
        }else{
            //Dominio
            torresHanoi(discos-1, torre1, torre3, torre2);
            System.out.println("Mover disco de Torre "+ torre1+" a torre "+ torre3);
            torresHanoi(discos-1, torre2, torre1, torre3);
            
        }
    }
}
