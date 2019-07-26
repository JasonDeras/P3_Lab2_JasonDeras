#include<iostream>
#include <cstdlib>

#ifndef MATRIZ_CPP
#define MATRIZ_CPP

using namespace std;

class Matriz{
	
	private:
		
		int ancho;
		int alto;
		int **matriz=NULL;
		
	protected:
		
	public:
		
		Matriz(){
			this-> ancho = 5;
			this-> alto = 5;
			
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
		
		Matriz(int ancho,int alto){
			
			this-> ancho=ancho;
		 	this->alto=alto;
			matriz=new int*[ancho];
			
         	for(int i=0;i<ancho;i++){
				matriz[i]=new int [alto];
			}//Llenado de la matriz de puntero
				
			for(int i=0;i<ancho;i++){
				for(int j=0;j<alto;j++){
					matriz[i][j] = (1+rand()%50);
				}//Fin del segundo for
			}//Fin del primer for	
		}//Constructor sobrecargado
		
		void setAncho(int ancho){
			this->ancho=ancho;
		}//Metodo set del ancho de la matriz
		
		void setAlto(int alto){
			this->alto=alto;
		}//Metodo set del alto de la matriz
	
		int getAncho(){
			return ancho;
		}//Metodo get del ancho de la matriz
		
		int getAtlo(){
			return alto;			
		}//Metodo get del alto de la matriz
		
		void setMatriz(int**matriz){
			this->matriz=matriz;
		}//Metodo set de la matriz
		
		int** getMatriz(){
			return matriz;
		}//Metodo get de la matriz
		
		bool suma(Matriz *m){
			
			bool res;
			
			int ancho2=m->getAncho();
			int alto2=m->getAtlo();
			
			if(ancho==ancho2&&alto==alto2){
				for(int i=0;i<alto;i++){
					for(int j=0;j<ancho;j++){
						matriz[i][j]=matriz[i][j]+m->getMatriz()[i][j];
					}
				}
				printMatriz2(matriz,5);
				res=true;
			}else {
				res=false;
			}
			return res;
		}//Fin del metodo que retorna la suma de las matrices
		
		bool resta(Matriz *m){
			
			int ancho2=m->getAncho();
			int alto2=m->getAtlo();
			int size=alto*ancho;
			
			if(ancho==ancho2&&alto==alto2){
				for(int i=0;i<alto;i++){
					for(int j=0;j<ancho;j++){
						matriz[i][j]=matriz[i][j]-m->getMatriz()[i][j];
					}
				}
				printMatriz2(matriz,size);
				return true;
			}else {
				return false;
			}//Fin de la validacion de la resta de la matrices
		}//Fin del metodo que retorna la resta de las matrices
		
		void Multiplicacion(int escalar){
			int size=ancho*alto;
			for(int i=0;i<ancho;i++){
				for(int j=0;j<alto;i++){
					matriz[i][j]=matriz[i][j]*escalar;
				}
			}
			printMatriz2(matriz,size);
		}//Fin del metodo que retorna la multiplicacion de las matrices
		
		void printMatriz2(int** matriz,int size){
    		for(int i=0;i<size;i++){
        		for(int j=0;j<size;j++){
        			cout<<"["<<matriz[i][j]<<"]";
				}//Fin del for de impresion
				cout<<"\n";
    		}//Fin del for de impresion
		}//Fin del metodo para imprimir la matriz
		
		~Matriz(){
			
		}//Destructor de la clase matriz
};

#endif
