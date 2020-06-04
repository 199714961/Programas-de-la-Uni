void main(){
	int a,b,area,perimetro;
	
	printf("Inserte el lado A del rectangulo:");
	scanf("%d",&a); //Ojo, siempre que vas a asignar un valor a una variable debe ir un "&" 
	printf("Inserte el lado B del rectangulo (base):");
	scanf("%d",&b);
	
	//calcular area
	area=a+b;
	
	//calcular perimetro
	perimetro=b*a;
	
	//Imprimir resultados
	printf("\n Area: %d",area);
	printf("\n Perimetro: %d",perimetro);
}


