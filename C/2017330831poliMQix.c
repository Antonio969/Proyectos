#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Programa 2*/
/*Comencemos por definir nuestras estructuras*/

typedef struct _Q_{ /*Racionales*/
int p,q;
}Q;

typedef struct _C_{ /*Complejos*/
Q a,b;
}C;

typedef struct _M_{ /*Matrices*/
int n;
C **ent;
}M;

typedef struct _P_{ /*Polinomios*/
int n;
M *coef;
}P;

/*Definición de funciones para racionales*/
Q leeQ();
Q sumaQ(Q a,Q b);
Q restaQ(Q a,Q b);
Q prodQ(Q a,Q b);
Q simplificaQ(Q a);
Q normacuadC(C a);
int mcd(int a,int b);
int escribeQ(Q a);

/*Definición de funciones para complejos*/
C leeC();
C sumaC(C a,C b);
C prodC(C a,C b);
C conj(C a);
C divC(C a,C b);
int escribeC(C a);

/*Definición de funciones para matrices*/
M crea_espacioM(int n);
int leeM(M *mat,int n);
M sumaM(M a,M b);
M prodM(M a,M b);
int escribeM(M a);
int esCeroM(M a);
int liberaM(M *a);
M copiaM(M a);
M creamat(int n);

/*Definición de funciones para polinomios*/
P crea_espacioP(int n);
int leeP(P *a,int m);
P sumaP(P a,P b);
P prodP(P a,P b,int n);
void escribeP(P a);
int liberaP(P *a);
P copiaP(P a);
int creaPcero(P *a);
M evaluaP(P a,M b,int n);


/*Función main*/
int main()
{
   int n;

    P X,Y,Z;
    M ev,a,b;

    printf("Digite el orden de las matrices: ");
    scanf("%d",&n);

    printf("\nPor leer el primer polinomio.\n");
    leeP(&X,n);

    printf("\nPor leer el segundo polinomio.\n");
    leeP(&Y,n);

    printf("\nDigite la matriz en la que se evaluaran los polinomios:");
    leeM(&ev,n);

    Z=sumaP(X,Y);
    printf("\nLa suma de los polinomios es:\n");
    escribeP(Z);
    liberaP(&Z);

    Z=prodP(X,Y,n);
    printf("\nEl producto de los polinomios es:\n");
    escribeP(Z);
    liberaP(&Z);

    if(X.n>=0){
    printf("\n La evaluacion del primer polinomio en la matriz dada es:\n");
    ev=evaluaP(X,ev,n);
    escribeM(ev);
    liberaM(&ev);
    }else{
     ev=creamat(n);
     escribeM(ev);
     }

    return 0;
}

/*Funciones para racionales*/
Q leeQ(){
    Q ret;
    printf("\nEscriba p:");
    scanf("%d",&ret.p);
    printf("\nEscriba q:");
    scanf("%d",&ret.q);

    ret=simplificaQ(ret);

    return ret;
    }

Q sumaQ(Q a,Q b){
    Q ret;

    ret.p=a.p*b.q+b.p*a.q;
    ret.q=a.q*b.q;

    ret=simplificaQ(ret);

    return ret;

}

Q restaQ(Q a,Q b){
    Q ret;

    ret.p=a.p*b.q-a.q*b.p;
    ret.q=a.q*b.q;

    ret=simplificaQ(ret);

    return ret;
    }

Q prodQ(Q a,Q b){
    Q ret;

    ret.p=a.p*b.p;
    ret.q=a.q*b.q;

    ret=simplificaQ(ret);

    return ret;
    }

Q divQ(Q a,Q b){
    Q ret;
    ret.p=a.p*b.q;
    ret.q=a.q*b.p;

    return ret;
}


Q simplificaQ(Q a){

    int d=mcd(a.p,a.q);

    if(a.q<0){
    a.q*=-1;
    a.p*=-1;
    }

    a.p/=d;
    a.q/=d;



    return a;
}


int mcd(int a,int b){
    int r;
    if(a<0) a*=-1;
    if(b<0) b*=-1;
    if(b==0) return a;

    while((r=a%b)!=0){
    a=b;
    b=r;
    }

    return b;
    }


int escribeQ(Q a){
    char texto[128],formato[32];
    int tam, espacios=10;

    if(a.p==0){
    printf("  0  ");
    return 0;}

    printf("%d",a.p);

    if(a.q!=1)
        printf("/%d",a.q);

    printf(" ");

    return 0;
}
/*Funciones para racionales*/

C leeC(){
    C ret;
    printf("\nEscriba la parte real.");
    ret.a=leeQ();
    printf("\nEscriba la parte imaginaria.");
    ret.b=leeQ();

    return ret;
}


C sumaC(C a,C b){
    C ret;
    ret.a=sumaQ(a.a,b.a);
    ret.b=sumaQ(a.b,b.b);

    return ret;

}


C prodC(C a,C b){
    C ret;

    ret.a=restaQ(prodQ(a.a,b.a),prodQ(a.b,b.b));
    ret.b=sumaQ(prodQ(a.a,b.b),prodQ(a.b,b.a));

    return ret;
}


C conj(C a){
    a.b.p*=-1;

    return a;

}

Q normacuadC(C a){
    Q ret;
    ret.q=1;
    ret=sumaQ(divQ(prodC(a,conj(a)).a,normacuadC(a)),divQ(prodC(a,conj(a)).b,normacuadC(a)));
    return ret;
}

C divC(C a,C b){
    C ret;
    ret.a=divQ(prodC(a,conj(b)).a,normacuadC(b));
    ret.b=divQ(prodC(a,conj(b)).b,normacuadC(b));

    return ret;
}


int escribeC(C a){

    if(a.a.p!=0 || a.b.p!=0){
        printf("(");
        if(a.a.p!=0)
            escribeQ(a.a);

        if(a.b.p!=0){
            if(a.b.p==1 && a.b.q==1)
                printf("+ i");
            else if (a.b.p==-1 && a.b.p==1)
                printf("- i");
            else{
                printf(" + ");

                escribeQ(a.b);
                printf(" i");
                }
            printf(")");
        }

    }else printf("  0  ");

    printf("   ");
    return 0;
}


/*Funciones para matrices*/
M crea_espacioM(int n){
    M ret={n:n,ent:NULL};
    int i;

    ret.ent=(C**)malloc(n*sizeof(C*));
    if(ret.ent!=NULL){
        for(i=0;i<n;i++){
            ret.ent[i]=(C*)malloc(n*sizeof(C));
            if(ret.ent[i]==NULL){
                while(i>0){
                    free(ret.ent[--i]);
                    ret.ent[i]=NULL;
                }
                ret.n=0;
                break;
            }
        }
    }

    return ret;

}

int leeM(M *mat,int n){
    int i,j;

    if(mat == NULL) return -1;

    *mat=crea_espacioM(n);

    printf("\nIngrese las entradas de la matriz:");

    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            printf("\nDigite la entrada[%2d,%2d]:",i+1,j+1);
            mat->ent[i][j]=leeC();
            }


    return 0;

}


M sumaM(M a,M b){
    M ret={n:a.n};
    int i,j;

    if(esCeroM(a)) return copiaM(b);

    if(esCeroM(b)) return copiaM(a);




    ret=crea_espacioM(a.n);

    for(i=0;i<ret.n;i++)
        for(j=0;j<ret.n;j++)
            ret.ent[i][j]=sumaC(a.ent[i][j],b.ent[i][j]);



     return ret;

}


M prodM(M a,M b){
    M ret;
    int i,j,k;
    C x;
    x.a.p=0;
    x.a.q=1;
    x.b.p=0;
    x.b.q=1;

    if(esCeroM(a)) return copiaM(a);
    if(esCeroM(b)) return copiaM(b);

    ret=crea_espacioM(a.n);

    for(i=0;i<a.n;i++)
        for(j=0;j<a.n;j++)
            ret.ent[i][j]=x;

    for(i=0;i<a.n;i++)
        for(j=0;j<a.n;j++)
            for(k=0;k<a.n;k++)
                ret.ent[i][j]=sumaC(ret.ent[i][j],prodC(a.ent[i][k],b.ent[k][j]));

    return ret;

}


int escribeM(M a){
    int i,j;

    for(i=0;i<a.n;i++){
        printf("\n");
        for(j=0;j<a.n;j++)
            escribeC(a.ent[i][j]);
            }


    return 0;
}

int esCeroM(M a){
    int i,j;


    for(i=0;i<a.n;i++){
        for(j=0;j<a.n;j++){
            if(a.ent[i][j].a.p!=0 || a.ent[i][j].b.p!=0)
                return 0;


        }
    }


        return 1;

}

int liberaM(M *a){
    int i;

    for(i=0;i<a->n;i++){
        free(a->ent[i]);
        a->ent[i]=NULL;
    }
    free(a->ent);
    a->ent=NULL;
    a->n=0;

    return 0;


}

M copiaM(M a){
    int i,j;
    M ret={n:a.n};

    if(esCeroM(a)) return a;

    ret=crea_espacioM(ret.n);

    for(i=0;i<ret.n;i++)
        for(j=0;j<ret.n;j++)
            ret.ent[i][j]=a.ent[i][j];

    return ret;
}

M creamat(int n){
    int i,j;
    M ret;
    C x;
    x.a.p=0;
    x.a.q=1;
    x.b.p=0;
    x.b.q=1;
    ret=crea_espacioM(n);

    for(i=0;i<ret.n;i++)
        for(j=0;j<ret.n;j++)
            ret.ent[i][j]=x;

    return ret;

}

/*Funciones para polinomios*/

P crea_espacioP(int n){
    P ret={n:n-1,coef:NULL};
    int i;

    ret.coef=(M*)malloc(n*sizeof(M));

    if(ret.coef==NULL){
        printf("\nError al generar espacio.\n");
        ret.n=-1;
        }

    return ret;
}
int leeP(P *a,int m){
    int i,n;

    printf("\nDigite el grado del polinomio: ");
    scanf("%d",&n);

    *a=crea_espacioP(n+1);

    printf("\nDigite los coeficientes del polinomio:");

    for(i=0;i<=n;i++){

    printf("\nDigite el coeficiente de grado %d",i);
    leeM(&(a->coef[i]),m);

    }


    while(a->n>=0 && esCeroM(a->coef[a->n])){
        liberaM(&a->coef[a->n]);
        a->n--;
        }

    if(a->n<0)
        liberaP(a);

    return 0;
}


P sumaP(P a,P b){
    P ret;
    int i,max,min;

    if(a.n<0) return copiaP(b);
    if(b.n<0) return copiaP(a);

    if(a.n<=b.n){
        min=a.n;
        max=b.n;
        }else{
        min=b.n;
        max=a.n;
        }

    ret=crea_espacioP(max+1);

    for(i=0;i<=min;i++){
        ret.coef[i]=sumaM(a.coef[i],b.coef[i]);
        }

    if(a.n==min){
        for(;i<=ret.n;i++)
            ret.coef[i]=copiaM(b.coef[i]);
        }else{
        for(;i<=ret.n;i++)
            ret.coef[i]=copiaM(a.coef[i]);
        }

    while(ret.n>=0 && esCeroM(ret.coef[ret.n])){
        liberaM(&ret.coef[ret.n]);
        ret.n--;
        }

    if(ret.n<0)
        liberaP(&ret);

    return ret;
}


P prodP(P a,P b,int n){
    P ret={n:a.n+b.n};
    int i,j;

    if(a.n<0) return a;
    if(b.n<0) return b;

    ret=crea_espacioP(ret.n+1);

    for(i=0;i<=ret.n;i++)
        ret.coef[i]=creamat(n);

    for(i=0;i<=a.n;i++)
        for(j=0;j<=b.n;j++)
            ret.coef[i+j]=sumaM(ret.coef[i+j],prodM(a.coef[i],b.coef[j]));

    while(ret.n>=0 && esCeroM(ret.coef[ret.n])){
        liberaM(&ret.coef[ret.n]);
        ret.n--;
        }

    if(ret.n<0)
    liberaP(&ret);

    return ret;
}

void escribeP(P a){
    int i;
//poner un if para g<0

    if(!esCeroM(a.coef[0]))
        escribeM(a.coef[0]);

     if(a.n>0) printf(" + ");

    printf("\n\n");

    for(i=1;i<=a.n;i++){
        if(!esCeroM(a.coef[i])){
            escribeM(a.coef[i]);

            if(i>1)
            printf(" x^%d ",i);
            else printf(" x ");

            if(a.n>i)
                printf("+ ");

            printf("\n\n");
        }

    }
}



int liberaP(P *a){
int i;
    if(a==NULL)
        return -1;
    if(a->coef!=NULL){
        for(i=0;i<=a->n;i++)
            liberaM(&a->coef[i]);
        free(a->coef);
        }
    a->coef=NULL;
    a->n=-1;

    return 0;
    }

P copiaP(P a){
    int i;
    P ret={n:a.n};

    ret=crea_espacioP(ret.n+1);

    for(i=0;i<=ret.n;i++)
        ret.coef[i]=a.coef[i];

    return ret;
}


M evaluaP(P a,M b,int n){
    M ret;
    int i;


    if(esCeroM(b)) return copiaM(a.coef[0]);

    ret=creamat(n);

    for(i=a.n;i>0;i--)
        ret=prodM(sumaM(ret,a.coef[i]),b);

    ret=sumaM(ret,a.coef[0]);

    return ret;


}

