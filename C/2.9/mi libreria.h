float sumar(float num1, float num2){
	float ressuma=num1+num2;
	return ressuma;
}
float restar(float num1, float num2){
	float resresta=num1-num2;
	return resresta;
}
float multiplicar(float num1, float num2){
	float resmultiplicar=num1*num2;
	return resmultiplicar;
}
float dividir(float num1, float num2){
	if(num2!=0){
		float resdividir=num1/num2;
		return resdividir;
	}else{
		return 0.0;
	}
}
