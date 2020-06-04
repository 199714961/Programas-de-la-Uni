void main(){
	int precio, descuento, total;
	float descuentoDecimal;
	
	
	printf("Inserta el precio: ");
	scanf("%d",&precio); //"scanf" para leer el dato de usuario, "&" para concatenar (?
	printf("Precio:  %d", precio);
	
	
	printf("\nInserta el porcentaje de descuento:");
	scanf("%d",&descuento);
    descuentoDecimal=(float)descuento/100;//Este decimal lo toma como un numero negativo...wtf?
    descuento=precio*descuentoDecimal;
    printf("\nDescuento decimal: %d", descuentoDecimal,"");
    printf("\nDescuento real: %d",descuento,"");
    printf("\n\nEl valor total del producto es: %d",precio-descuento);
	
}
