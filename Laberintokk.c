#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include <conio.h>

void gotoxy(int x,int y){
HANDLE hCon;
COORD dwPos;
dwPos.X=x;
dwPos.Y=y;
hCon=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hCon,dwPos);
}


void main(){
	
	int largo = 5;
    int matriz[largo][largo];
    int i;
    int j;
   
    srand(time(NULL));
    //creación de matriz y generación de numeros aleatorios
    for(i=0; i< largo;i++){	
        for(j=0; j< largo;j++){	 
            matriz[i][j] = rand()%2; 	
            matriz[0][0] = 9; //trofeo
            matriz[4][4] = 0;
            
    }   
	
   }
 	/////////////////////////////////////
	
	char movimiento;
	int x=4;
	int y=4;
	int vida = 3;
	
	
do{
	
	
	
	for(i=0;i<largo;i++){
		for(j=0;j<largo;j++){
			printf("%d", matriz[i][j] );
		}
		printf("\n");
	}
	
	
	printf("\nEscapa de la prision\n1 = Alambrada.\n0 = Nada.\n9 = Salida.\n5 = Tú.\n\nPuntos de Vida: %d\n", vida);
	printf("Posicion: %d\t [%d][%d]\n", matriz[y][x] , y , x);
	

	
	//movimiento////////////////////////	
	gotoxy(x,y); printf("5");
	movimiento=getche();
	if(movimiento==97){//izquierda A
		x--; 
	}else if(movimiento==115){//abajo S
		y++;
	}else if(movimiento==100){//derecha D
		x++;
	}else if(movimiento==119){//arriba W
		y--;
	}
	////////////////////////////////////
	
	//calculo de vida //////////////////
	
	if(matriz[y][x]==1){
		vida--;
	}
	
	////////////////////////////////////
	
	if(matriz[y][x]==9){
		system("cls");
		printf("-----HAS GANADO-----\n");
		printf("Puntos de vida: %d", vida);
		break;
	}else if(vida<=0){
		system("cls");	
		printf("-----HAS PERDIDO-----\n");
		printf("Puntos de vida: %d", vida);
		break;
	}
	if(x>=5 || y>=5){
		system("cls");
		vida = 0;
		printf("-----TE HAS CAIDO-----\n");
		printf("Puntos de vida: %d", vida);
		break;
	}
	
	system("cls");
 }while(vida!=0);
 
 
}


