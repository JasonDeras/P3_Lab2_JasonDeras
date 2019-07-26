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
		
		
		~Matriz(){
			
		}//Destructor de la clase matriz
};

#endif
