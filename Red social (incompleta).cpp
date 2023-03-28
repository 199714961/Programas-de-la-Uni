#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;




struct Messenger{
		string send[20];  
		string received[20];
};

struct Wall{
		string title[10];
		string posted[10];
};


struct User{
	string mail;
	string name;
	string surname;
	string birthDate;
	struct Messenger message;
	struct Wall post;
};

int main(){
	User users[20];
	
	int choice1, choice2;
	int r=0;
	
	
	
	int news;
    cout<<"Cuantos usuarios nuevos desea crear? (maximo 20) \n";
	cin>>news;
    for(int i = 0; i < news; i = i + 1){
		cout<<"Ingrese nombre para nuevo usuario: \n";
		string nom;
		cin>>nom;
		users[i].name=nom;
		cout<<"Ingrese apellido para usuario: \n";
		string ape;
		cin>>ape;
		users[i].surname=ape;
		cout<<"Ingrese correo electronico para usuario: \n";
		string mail;
		cin>>mail;
		users[i].mail=mail;
		cout<<"Ingrese fecha de nacimiento para usuario: \n";
		string date;
		cin>>date;
		users[i].birthDate=date;
		//Debo crear un nuevo objeto de tipo struct wall y struct message para cada usuario
		
	};
	
	
	
	
	
	while(true){
		cout<<"##############AUTENTIFICACION##############\n";
	int pUser=22; //guarda la posicion del usuario para acceder a ello mas tarde
	cout<<"Nombre:";
	string a;
	cin>>a;
	for(int i = 0; i < 20; i = i + 1){
		if(users[i].name.compare(a) == 0){
			pUser=i;
			break;
		}
	};
	
	if(pUser!=22){ //Si se logro una autenticacion entonces dar la posibilidad de ingresar a sus mensajes y muro...
		cout<<"Realice alguna accion \n"; 
		cout<<"--------------------------------\n";
		cout<<"[1]Muro\n";
		cout<<"[2]Mensajes\n";
		cin>>choice1;
		switch(choice1) {
    		case 1: 
    			cout<<"[1]Ver mis posteos\n";
				cout<<"[2]Hacer posteo\n";
				cin>>choice2;
				if(choice2==1){
					
					if(users[pUser].post.posted[0]==""){ 
						cout<<"No posee publicaciones\n";
					}else{                               //Si el array "posted" posee algo en el espacio 0 entonces mostrar todo lo que tiene:
						for(int i = 0; i < 10; i = i + 1){ 
							cout<<users[pUser].post.posted[i];
							cout<<"-------------------";
						};
					}
				}else{
					//Aca el usuario podra postear algo y debe ser guardado de la posicion 0 en adelante...
					for(int i = 0; i < 10; i = i + 1){
						if(users[pUser].post.posted[i]==""){
							cout<<"Inserte su publicacion: \n";
							string publication;
							//OJOOOOOOOO
							//PARA QUE getline() NO SE SALTE LA LINEA (Y PERMITA LA ENTRADA DE VALORES) SE DEBE COLOCAR UN cin.ignore()
							cin.ignore();              
							getline(cin, publication);
							//FIN OJOOOOOO 
							users[pUser].post.posted[i]=publication;
							break;
							}
						};
				}
				cout<<"La publicacion fue: \n";
				cout<<users[pUser].post.posted[0];
				//ATENCION, DEBO PROBAR CON VARIAS PUBLICACIONES PARA PROBAR SI ESTO FUNCIONA...
					
    		break;
    		
    		case 2: 
    			cout<<"[1]Ver mensajes enviados\n";
				cout<<"[2]Ver mensajes recibidos\n";
				cout<<"[3]Enviar mensaje\n";
    			cin>>choice2;
				if(choice2==1){
					cout<<"Cada usuario debe tener un arreglo donde ver sus mensajes enviados\n";
				}else if(choice2==2){
					cout<<"El usuario debe ser capaz de revisar sus mensajes recibidos\n";
					
				}else{ //se debe mostrar la lista de usuarios creados para seleccionar uno y enviarle un msje...
					if(users[1].name==""){
						cout<<"No hay mas usuarios aparte de ti registrados en el sistema...\n";
					}else{
						int pos, pos2; //"pos" = receptor          "pos2"=arrays de estructuras internas propias de cada usuario
						
						//Este for es para imprimir el nombre de todos los usuarios inscritos en el sistema:
						cout<<"Elige destinatario: \n";
						for(int i = 0; i < 10; i = i + 1){
							cout<<i;
							cout<<users[i].name+"\n";
							if(users[i].name==""){//Cuando ya no encuentra usuarios el ciclo se cierra... esto es solo para mostrarlos
								break;
							}
						};
						cin>>pos; //Esto guarda la posicion del usuario RECEPTOR
						
						for(int i = 0; i < 10; i = i + 1){
							if(users[pos].message.received[i]==""){
								pos2=i; //Esto es para guardar el mensaje en los "recibidos" del usuario receptor
								break;
							}
						};

						cout<<"Mensaje: ";
						cin.ignore();
						getline(cin,users[pos].message.received[pos2]); //"pos2" no posee valor...
						
						//Este for es para guardar el mensaje al usuario emisor en el array "send" de la estructura "Messenger" de la estructura "User"
						int pAux;
						for(int i = 0; i < 10; i = i + 1){
							if(users[pUser].message.send[i]==""){
								cout<<"ESTO SE DEBE MOSTRAR...";
								pAux=i; //Este es el espacio disponible en el array "send" del emisor...
								cout<<pAux;
								break;
							}
						};
						
						users[pUser].message.send[pAux]=users[pos].message.received[pos2];
					}
				
				}
    	    
    		break;
			}
		
	}else{ //Sino informar que no pertenece a ninguna cuenta y repetir el ciclo
		cout<<"No existe un usuario con ese nombre\n";
	}	
	}
	
	
	
	
	
	
}


