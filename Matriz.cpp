#include<iostream>
#include <cstdlib>
#ifndef MATRIZ_CPP
#define MATRIZ_CPP

using namespace std;

class Matriz{
	
	private:
		
		int ancho;
		int alto;
		
	protected:
		
	public:
		
		Matriz(){
			
			int **matriz;
			matriz=new int*[5];
         	for(int i=0;i<5;i++){
				matriz[i]=new int [5];
			}//Llenado de la matriz de puntero
				
			for(int i=0;i<5;i++){
				for(int j=0;j<5;j++){
					matriz[i][j] = (1+rand()%50);
				}//Fin del segundo for
			}//Fin del primer for	
					
		}//Fin del constructor simple
		
		Matriz(int valor){
			longitud=valor;
			anchura=valor;
		}//Constructor sobrecargado
		
		Matriz(int l,int a){
			longitud=l;
			anchura=a;
		}
		
		void setLongitud(int longitud){
			
			if(longitud>0&&longitud<20){
				this->longitud=longitud;
			}//Fin del if
			
		}//Set de la longitud
		
		void setAnchura(int anchura){
			
			if(anchura>0&&anchura<20){
				this->anchura=anchura;
			}//Fin del if
			
		}//set de la anchura
	
		int getAnchura(){
			return anchura;
		}//get de la anchura
		
		int getLongitud(){
			return longitud;			
		}//get de la longitud
		
		int area(){
			return anchura*longitud;
		}//metodo del area del rectangulo
		
		int perimetro(){
			return (anchura*2)+(longitud*2);
		}//Metodo del perimetro del rectangulo
		
		void print(){
			cout<<"Longitud:"<<longitud<<
			" anchura: "<<anchura<<
			" Area: "<<area()<<
			" perimetro: "<<perimetro()<<endl;
		}//Fin del metodo to string
		
		~Rectangulo(){
			
		}
};

#endif
