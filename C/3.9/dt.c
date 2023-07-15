#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct copmra{       
    int numr, denr,numc, denc;
}com1,com2;

int main(){
	int nr,dr,nc,dc;
	double n1,n2,ns,a,b,c,d,e,f;
	printf("Se leera el primer complejo complejo:\n");
	printf("Digite los valores del primer complejo:\n");
	printf("Numerador real:");
	scanf("%d",&com1.numr);
	printf("Denominador real:");
	scanf("%d",&com1.denr);
	printf("Numerador imaginario:");
	scanf("%d",&com1.numc);
	printf("Denominador imaginario:");
	scanf("%d",&com1.denc);
	printf("Se leera el segundo complejo:\n");
	fflush(stdin);
	printf("Digite los valores del segundo complejo:\n");
	printf("Numerador real:");
	scanf("%d",&com2.numr);
	printf("Denominador real:");
	scanf("%d",&com2.denr);
	printf("Numerador imaginario:");
	scanf("%d",&com2.numc);
	printf("Denominador imaginario:");
	scanf("%d",&com2.denc);
	system("PAUSE");
	printf("-----------------------------------------------------\n");
	nr= (com1.numr*com2.denc)+(com2.numr*com1.denr);
	dr= com1.denr*com2.denr;
	nc=com1.numc*com2.denc+com2.numc*com1.denc;
	dc= com1.denc*com2.denc;
	printf("La suma de los complejos es: %d/%d + %d/%di \n",nr,dr,nc,dc);
	n1=sqrt((com1.numr*com1.numr*com1.denc*com1.denc)+(com1.numc*com1.denr*com1.numc*com1.denr))/(com1.denr*com1.denc);
	printf("La norma del primer complejo es : %f\n",n1);
	n2=sqrt((com2.numr*com2.numr*com2.denc*com2.denc)+(com2.numc*com2.denr*com2.numc*com2.denr))/(com2.denr*com2.denc);
	printf("La norma del segundo complejo es : %f\n",n2);
	ns=sqrt((nr*nr*dc*dc)+(nc*nc*dr*dr))/(dr*dc);
	printf("La norma de la suma de complejos es : %f\n",ns);
	system("PAUSE");
	return 0;
}

