//Funcion  con parametros.
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//creando los prototipos de las funciones.
void chalan_Mezclero(int botes);
void chalan_Tabiquero(int tabiques);
void kazzy_chalan(int tortas, int refrescos);
//programa principal main "maistro"
int main(int argc, char *argv[]) {
	int n,m;
	printf("Digite cuantos botes de mezcla necesita: \n");
	scanf("%d",&n);
	printf("Digite cuantos tabiques necesita: \n");
	scanf("%d",&m);
	printf("Soy el maistro y necesito %d  botes de mezcla y %d tabiques\n",n,m);
	chalan_Mezclero(n);
	printf("________________________________________________________________________\n");
	printf("Soy el maistro y necesito tabiques\n");
	chalan_Tabiquero(m);
	return 0;
	system("PAUSE");
}
//desarrollando a las funciones "chalanes"
void chalan_Mezclero(int botes){
	int cuentabotes=0,l=0,k=0;
	printf("Chalan mezclero trabajando...\n");
	for(cuentabotes=1; cuentabotes<=botes;cuentabotes++){
		printf("Aqui esta el bote de mezcla numero #%d\n",cuentabotes);
		Sleep(1500);
	}
	printf("Servido maistro\n");
	Sleep(5000); 
	printf("que y hambre tengo...\n");
	printf("Digite cuantas tortas quieres: \n");
	scanf("%d",&l);
	printf("Digite cuantos refrescos quieres: \n");
	scanf("%d",&k);
	printf("kazzy chalan, lanzate por % tortas y %d refrescos\n",l,k);
	kazzy_chalan(l,k);
}
void chalan_Tabiquero(int tabiques){
	int cuentatabiques=0;
	printf("Chalan tabiquero trabajando...\n");
	for(cuentatabiques=1; cuentatabiques<=tabiques;cuentatabiques++){
		printf("Aqui esta el tabique numero #%d\n",cuentatabiques);
		Sleep(500);
	}
	printf("Servido maistro\n");
	
}
void kazzy_chalan(int tortas,int refrescos){
	int cuentatortas=0,cuentarefrescos=0;
	for(cuentatortas=1;cuentatortas<=tortas;cuentatortas++){
		printf("Aqui esta su torta numero #%d\n",cuentatortas);
		Sleep(300);
	}
	printf("Servido!!!\n");
	for(cuentarefrescos=1;cuentarefrescos<=refrescos;cuentarefrescos++){
		printf("Aqui esta su refresco numero #%d\n",cuentarefrescos);
		Sleep(300);
	}
}
