void main(){
	int segundos, c=0;
	int minutos=0, horas=0, dias=0;
	printf("Ingrese segundos:");
	scanf("%d",&segundos);
	
	while(0<segundos){
		c++;
		if(c==60){
			minutos++;
			c=0;
		}
		if(minutos==60){
			horas++;
			minutos=0;
		}
		if(horas==24){
			dias++;
			horas=0;
		}
		segundos--;
	}
	printf("\nSegundos: %d",c);
	printf("\nMinutos: %d",minutos);
	printf("\nhoras: %d",horas);
	printf("\nDias: %d",dias);
	
}
