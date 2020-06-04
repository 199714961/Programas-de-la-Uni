void main(){
	float r1,r2;

printf("Ingresa la primera resistencia");
scanf("%f",&r1);
printf("\nIngresa la segunda resistencia");
scanf("%f",&r2);

printf("La resistencia equivalente en paralelo es: %f",((r1*r2)/(r1+r2)));

}
