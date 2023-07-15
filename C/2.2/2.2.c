//Anidamiento de estructuras for
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[]) {
	int i=0, j=0, k=0, n;
	printf("Introduzaca las horas: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		for(j=0;j<=60;j++){
			for(k=0;k<=60;k++){
				printf("%d:%d:%d",i,j, k);	
				Sleep(1);
				system("cls");
				if(i==23){
				 i=-1;
				}
			}
		}
	}
	return 0;
	system("PAUSE");
}
