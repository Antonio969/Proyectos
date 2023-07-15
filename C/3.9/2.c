#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct _ratio_{        //define un racional con numerador y denominador
    int num, den;
}Racional;

typedef struct _coef_{         //define un complejo con su parte real e imaginaria
    Racional re, im;
}Complejo;

typedef struct _mat_{          //define una matriz con su grado y entradas complejas racionales
    int n;
    Complejo **ent;
}Matriz;

typedef struct _pol_{          // define un polinomio con su grado y coeficientes matriciales
    int deg;
    Matriz *coef;
}Polinomio;

//funciones para racionales
Racional leeR();                            //lee racionales
Racional sumaR(Racional a, Racional b);     //suma 2 racionales
Racional restaR(Racional a, Racional b);    //resta 2 racionales
Racional productoR(Racional a, Racional b);  //producto de 2 racionales
Racional simplificaR(Racional a);           //hace primos relativos
int mcd(int a, int b);                      //maximo comun divisor
int muestraR(Racional a);                   //muestra el racional

//funciones para complejos
Complejo leeC();                            //lee 1 complejo
Complejo sumaC(Complejo C, Complejo D);     //suma 2 complejos
Complejo productoC(Complejo C, Complejo D); //Hace el producto de 2 complejos
int muestraC(Complejo C);                   //muestra el complejo

//funciones para matrices
Matriz creaM(int n);                        //crea espacio de la matriz
int leeM(Matriz *A, int n);                 //lee una matriz
Matriz sumaM(Matriz A, Matriz B);           //suma 2 matrices
Matriz productoM(Matriz A, Matriz B);       //multiplica 2 matrices
int muestraM(Matriz A);                     //muestra una matriz
int liberaM(Matriz *A);                     //libera espacio de la matriz

//funciones para polinomios
Polinomio creaP(int deg);                                   //crea espacio del polinomio
int leeP(Polinomio *P, int deg);                            //lee un polinomio
Polinomio sumaP(Polinomio P, Polinomio Q);                  //suma 2 polinomios
Polinomio productoP(Polinomio P, Polinomio Q, int n);     //multiplica 2 polinomios
int muestraP(Polinomio P);                                  //muestra un polinomio
int liberaP(Polinomio *P);                                  //libera e espacio del polinomio

Matriz evP(Matriz A, Polinomio P, int n);               //evalua la matriz en el polinomio

int main(int argc, char *argv[])
{
    int n;
    Polinomio P, Q, R, S;
    Matriz A;

    printf("------------------------------------\n");
    printf("| Digite el orden de las matrices: ");
    scanf("%d",&n);
    printf("------------------------------------\n");

    printf("\nSe leera el polinomio 1:\n");
    leeP(&P,n);
    //printf("\nEl polinomio leido es: \n");
    //muestraP(P);
    printf("\nSe leera el polinomio 2:\n");
    leeP(&Q,n);

    printf("\n\nEl polinomio 1 es:\n");
    muestraP(P);

    printf("\nEl polinomio 2 es:\n");
    muestraP(Q);


    R=sumaP(P, Q);
    printf("\n\nLa suma de los polinomios es:\n\n");
    muestraP(R);
    //liberaP(&R);


    S=productoP(P,Q, n);
    printf("El producto de los polinomios es:\n");
    muestraP(S);
    liberaP(&S);

    printf("\n----------------------------------------------------\n");
    printf("| Digite la matriz que se evaluara en el polinomio 1 |\n");
    printf("----------------------------------------------------\n");
    leeM(&A,n);
    printf("\n\n-----------------");
    printf("\n| La matriz es: |\n");
    printf("-----------------\n\n");
    muestraM(A);
    printf("\n------------------------------------------------------------");
    printf("\n| La evaluacion del primer polinomio en la matriz dada es: |\n");
    printf("------------------------------------------------------------\n\n");
    A=evP(A,P,n);
    muestraM(A);
    liberaM(&A);


    printf("\nFin del programa\n");
    system("pause");
    return 0;
}

Racional leeR()
{
    //srand(time(NULL));
    Racional ret;
    ret.num=(rand() % 5)+1;
    printf("Numerador = %d",ret.num); fflush(stdout);
    //printf("Numerador =");
    //scanf("%d",&ret.num);
    ret.den=(rand() % 5)+1;
    printf("\n----------------------> Denominador = %d",ret.den); fflush(stdout);
    //printf("\n----------------------> Denominador = ");
    //scanf("%d",&ret.den);

    ret=simplificaR(ret);

  return ret;
}

Racional sumaR(Racional a, Racional b)
{
    Racional sum;

    sum.num=a.num*b.den+a.den*b.num;  //numerador de suma
    sum.den=a.den*b.den;              //denominador de suma
    sum=simplificaR(sum);

  return sum;
}

Racional restaR(Racional a, Racional b)
{
    Racional res;

    res.num=a.num*b.den-a.den*b.num; //numerador de resta
    res.den=a.den*b.den;             //denominador de resta
    res=simplificaR(res);

  return res;

}

Racional productoR (Racional a, Racional b)
{
    Racional prod;

    prod.num=a.num*b.num;           //numerador de producto
    prod.den=a.den*b.den;           //denominador de producto
    prod=simplificaR(prod);

  return prod;
}

Racional simplificaR(Racional a)
{
   int t = mcd(a.num, a.den);

    if(a.den<0){                    //si el denominador es menor que 0 lo multiplica por -1
    a.den*=-1;
    a.num*=-1;
    }

    a.num/=t;                      //divide el numerador entre el mcd
    a.den/=t;                      //divide el denominador entre el mcd

    return a;
}

int mcd(int a, int b){
    if (a == 0 || b == 0) return 1;
    int t;//Para no perder b
    while (b != 0) {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int muestraR(Racional a)
{

    if (a.num==0){              //si el numerador es 0 imprime 0
       printf(" 0 ");
       return 0;
    }
    if (a.den==1){             // si el denominador es 1 imprime el numerdor
        printf("%d",a.num);
    }
    else
    printf("(%d/%d)",a.num,a.den);

  return 0;
}

Complejo leeC()
{
    Complejo C;

    printf("\nParte real------------> ");
    C.re=leeR();
    printf("\nParte imaginaria:-----> ");
    C.im=leeR();

    return C;
}

Complejo sumaC(Complejo C, Complejo D)
{
    Complejo sum;

    sum.re=sumaR(C.re,D.re);           //parte real de la suma
    sum.im=sumaR(C.im,D.im);           //parte imaginaria de la suma

    return sum;
}

Complejo productoC(Complejo C, Complejo D)
{
    Complejo prod;

    prod.re=restaR(productoR(C.re,D.re),productoR(C.im,D.im));      //parte real del producto
    prod.im=sumaR(productoR(C.re,D.im),productoR(C.im,D.re));     //parte imaginaria del producto

    return prod;
}

int muestraC(Complejo C)
{
    printf("("); muestraR(C.re); printf("+");
    muestraR(C.im); printf("i)");
    printf(" ");

    return 0;
}


Matriz creaM(int n) // recibe es tamaño de matriz
{
    Matriz A={n:n,ent:NULL};
    int i;

    A.ent=(Complejo**)malloc(n*sizeof(Complejo*));
    if(A.ent!=NULL){
        for(i=0;i<n;i++){
            A.ent[i]=(Complejo*)malloc(n*sizeof(Complejo));
            if(A.ent[i]==NULL){
                free(A.ent[i--]);
            }
        }
    }

    return A;
}

int leeM(Matriz *A, int n)
{
    int i,j;

    if(A==NULL){
        return -1;
    }

    *A=creaM(n);

    printf("------------------------------------");
    printf("\n| Digite las entradas de la matriz |\n");
    printf("------------------------------------");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\n\n ----------------------\n");
            printf("     |   Entrada [%d,%d]  |\n",i,j);
            printf("     ----------------------\n");
            A->ent[i][j]=leeC();
        }
    }
    return 0;
}

Matriz sumaM(Matriz A, Matriz B)
{
    int i,j;
    Matriz suma;

    suma=creaM(A.n);

    for(i=0;i<suma.n;i++){
        for(j=0;j<suma.n;j++){
            suma.ent[i][j]=sumaC(A.ent[i][j],B.ent[i][j]);
        }
    }
    return suma;
}

Matriz productoM(Matriz A, Matriz B)
{
    int i,j,k;
    Matriz prod;
    Complejo C;

    C.re.num=0;
    C.re.den=1;
    C.im.num=0;
    C.im.den=1;

    prod=creaM(A.n);

    for(i=0; i<prod.n; i++){ // Inicar entrada = 0
        for(j=0; j<prod.n; j++){
            prod.ent[i][j]=C;
        }
    }

    for(i=0;i<prod.n;i++){
        for(j=0;j<prod.n;j++){
            for(k=0;k<prod.n;k++){
                prod.ent[i][j] = sumaC( prod.ent[i][j], productoC(A.ent[i][k],B.ent[k][j]) );
            }
        }
    }
    return prod;
}

int muestraM(Matriz A)
{
    int i,j;

    for(i=0;i<A.n;i++){
        for(j=0;j<A.n;j++){

            muestraC(A.ent[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int liberaM(Matriz *A)
{
    int i;

    for(i=0;i<A->n;i++){
        free(A->ent[i]);
    }
    free(A->ent);

    return 0;
}

Polinomio creaP(int deg) // 4
{
    Polinomio P={deg:deg,coef:NULL};
    P.coef = (Matriz*)calloc((deg+1),sizeof(Matriz)); // 0 1 2 3

    if(P.coef==NULL){
        printf("\nNo se puede generar espacio.\n");
        free(P.coef);
    }
    return P;
}

int leeP(Polinomio *P, int n){

    int i,deg;

    printf("\nDigite el grado del polinomio: "); scanf("%d",&deg); // 3

    *P=creaP(deg);

    printf("\nDigite los coeficientes del polinomio \n");

    for(i=deg;i>=0;i--){
        printf("\n\n------------------------------------");
        printf("\n| Digite el coeficiente de grado: %d ",i);
        printf("\n------------------------------------\n\n");
        leeM(&P->coef[i],n);
    }

    return 0;
}

Polinomio sumaP(Polinomio P, Polinomio Q)
{
    Polinomio suma;
    int i,maxdeg,mindeg;

    if(P.deg<=Q.deg){ // 3
        mindeg=P.deg;
        maxdeg=Q.deg;
    }
    else{
        mindeg=Q.deg;
        maxdeg=P.deg;
    }
     suma=creaP(maxdeg);

    for(i=0; i<=mindeg; i++){ // [0][1][2] | 3
        suma.coef[i]=sumaM(P.coef[i],Q.coef[i]);
    }

    for(i=mindeg+1; i<=maxdeg; i++){
        if(P.deg<=Q.deg){
            suma.coef[i]=Q.coef[i]; // = Q[M]
        }
        else{
            suma.coef[i]=P.coef[i]; // = P[M]
        }
    }

    return suma;
}

Polinomio productoP(Polinomio P, Polinomio Q, int n)
{
    Polinomio prod={deg:P.deg+Q.deg}; // grado es suma de grados
    int i,j,a,b; // Auxiliares

    if(P.deg<0){ // Grado de P menor o 0, regresa P
        return P;
    }
    if(Q.deg<0){ // Grado de Q menor o 0,
        return Q;
    }

    prod=creaP(prod.deg);

    for(i=0;i<=P.deg+Q.deg;i++){
      prod.coef[i]=creaM(n); // Crear coeficiente de tamaño n

      // Matriz nula
      for(a=0; a<n; a++){
        for(b=0; b<n; b++){
          prod.coef[i].ent[a][b].re.num = 0;
          prod.coef[i].ent[a][b].re.den = 1;
          prod.coef[i].ent[a][b].im.num = 0;
          prod.coef[i].ent[a][b].im.den = 1;
        }
      }
    }

    for(i=0;i<=P.deg;i++){ // 3
        for(j=0;j<=Q.deg;j++){ // 1

            prod.coef[i+j]=sumaM(prod.coef[i+j] , productoM(P.coef[i],Q.coef[j]) );
        }
    }
    return prod;
}

int muestraP(Polinomio P)
{
    int i;

    for(i=P.deg;i>=0;i--){

        muestraM(P.coef[i]);
        printf(" (x^%d) \n",i);

        if(P.deg>0){
            printf(" + \n");
        }
    }
    printf("\n\n");
    return 0;
}

int liberaP (Polinomio *P){
    int i;
    if(P==NULL)
        return -1;

    if(P->coef!=NULL){
        for(i=0;i<=P->deg;i++){
            liberaM(&P->coef[i]);
        }
        free(P->coef);
    }

    return 0;
}

Matriz evP(Matriz A, Polinomio P, int n)
{
    Matriz E;
    Matriz aux;
    int i, a;

    E=creaM(n);
    aux = creaM(n);

    for (int k=0; k<n; k++){
      for (int j=0; j<n; j++){
        E.ent[k][j].re.num = 0;
        E.ent[k][j].re.den = 1;
        E.ent[k][j].im.num = 0;
        E.ent[k][j].im.den = 1;
      }
    }

    for(i=P.deg;i>=0;i--){
        a=i;
        aux=A;
        while (a>1){ // a = 2
          printf ("Potencia\n");
          aux = productoM(A,aux);
          a--;
        }

        if (i>0){
          E=sumaM(E, productoM(P.coef[i], aux) );
        } else {
          E=sumaM(E, P.coef[i]);
        }
    }
    return E;
}
