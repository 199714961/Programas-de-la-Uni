void main(){
	float codigo, precio, cantidad, descuento,iva=(19/100);
float descuentoDecimal;

printf("Ingresa el codigo del producto: ");
scanf("%f",&codigo);
printf("\nIngresa el precio del producto en pesos chilenos: ");
scanf("%f",&precio);
printf("\nCuantos lleva?: ");
scanf("%f",&cantidad);
printf("\nDe cuanto es el descuento?: ");
scanf("%f",&descuento);

descuentoDecimal=descuento/100;
printf("\nDescuento decimal: %f",descuentoDecimal);
float descuentoReal=descuentoDecimal*(cantidad*precio);

float totalIva=iva*(cantidad*precio);
printf("\nIVA ACTUAL: %f",iva);


printf("\n %f",codigo);
printf("          |%f",precio);

printf("\n%f",cantidad);
printf("          |%f",(precio*cantidad));

printf("\n %f",descuento); //Del tanto por ciento
printf("          |%f",(descuentoReal));

printf("\n 19% IVA");
printf("          |%f",iva);

printf("\n TOTAL:");
printf("          |%f",(cantidad*precio)+iva);
}
