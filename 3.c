void main(){
	float dolares, euros;
	printf("Cuantos dolares desea convertir a Euros?: ");
	scanf("%f", &dolares); //EL "%f" FUNCIONA PARA LOS FLOAT, DEPENDIENDO EL TIPO DE VARIABLE
	                       //EXISTEN MAS "%[letra]"
	
	printf("Dolares: %f",dolares);
	
	euros=dolares*0.93; //Esta operacion me lanza el numero aproximado
	printf("\nEso equivale a %f",euros,"euros.");
	
}
