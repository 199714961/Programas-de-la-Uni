#include<iostream>
#include<conio.h>
#include<string.h>
#include<fstream>
using namespace std;

class Plantilla{
	public:
		string header; //urlImagen
		string tPage; //titulo documento
		string title; //titulo pagina
		string description; //texto de saludo
		string externalLinks;
		string full;
		Plantilla(string, string, string, string, string);
		
};


Plantilla::Plantilla(string _header, string _tPage,string _title, string _description, string _externalLinks){
	header=_header;
	tPage=_tPage;
	title=_title;
	description=_description;
	externalLinks=_externalLinks;
	
	string plantillaP1="<!DOCTYPE html>\n <head> \n   <title>"+tPage+"</title> \n </head>";  //la p1 contiene: titulo documento
	string plantillaP2="\n	<body> \n<img src='"+header+"'>"; //La p2 contiene: urlEncabezado
	string plantillaP3="\n<h1>"+title+"</h1> \n<p>"+description+"</p>\n"; //La p3 contiene: Titulo de web, texto bienvenida.
	string plantillaP4=externalLinks; 
	string plantillaP5="\n</body> \n</html>";
	
	full=plantillaP1+plantillaP2+plantillaP3+plantillaP4+plantillaP5;
}


int main(){
	string url, tDoc, titulo, descripcion;
	int n; //para los links 
	
	cout<<"Inserte titulo para el documento:";
	cin>>tDoc;
	cout<<"Inserte url del encabezado:";
	cin>>url;
	cout<<"Inserte titulo para la pagina:";
	cin>>titulo;
	cout<<"Inserte descripcion para la pagina: ";
	cin.ignore();
	getline(cin, descripcion);
	cout<<"Inserte numero de links anexos que desea agregar:";
	cin>>n;
	
	string externos="";
	for(int i = 0; i < n; i = i + 1){
		cout<<"Inserte url para link n° ";
		cout<<(i+1);
		cout<<": ";
		string enla;
		cin>>enla;
		cout<<"Inserte nombre de referencia para link n°";
		cout<<(i+1);
		cout<<": ";
		string nRef;
		cin>>nRef;
		externos=externos+"<a href='"+enla+"'>"+nRef+"</a>\n";
	};
	
	Plantilla p(url, tDoc, titulo, descripcion, externos);
	
	
	//Create and open a text file
	ofstream MyFile("paginaPrueba.html");
	MyFile<<p.full;
	
	
	
	return 0;
}





