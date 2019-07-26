#include<iostream>
#include<string>
#include "Matriz.cpp"
#include<vector>
#include<bits/stdc++.h>

using namespace std;

void printMatriz(Matriz*,int size);

	int main(){
		
		int op;
		int r=1;
		int op2;
		int r2;
		int escalar;
		int filas;
		int cols;
		Matriz* m;
		int **m2;
		vector<string>lista;
		vector<string>lista;
		
		while (r==1){
			
			cout<<"Menu\n\n";
			cout<<"1. Matriz 5x5 aleatoria"<<endl;	
			cout<<"2. Matriz solo con los numeros aleatorios"<<endl;
			cout<<"Ingrese una opcion: ";
			cin>>op;
			cout<<"\n\n\n";
			
			switch(op){
				
				case 1:
					
					r2=1;	
					while(r2==1){
						
						cout<<"Menu\n\n";
						cout<<"1. Suma de matrices"<<endl;	
						cout<<"2. Resta de matrices"<<endl;
						cout<<"3. Multiplicacion por un escalar"<<endl;
						cout<<"4. Bitacora"<<endl;
						cout<<"4. Salir de este submenu"<<endl;
						cout<<"Ingrese una opcion: ";
						cin>>op2;
						cout<<"\n\n\n";
						
						switch(op2){
							
							case 1:
								
								m=new Matriz();
								cout<<"Matriz creada automaticamente"<<endl;
								printMatriz(m,5);
								cout<<"\n\n\n";
								cout<<"Ingrese la anchura de la matriz a sumar: ";
								cin>>filas;
								cout<<"Ingrese la columnas de la matriz a sumar: ";
								cin>>cols;
								
							break;
							
							case 2:
								
							break;
							
							case 3:
								
							break;
							
							case 4:
								
							break;
							
							case 5:
								
								m->~Matriz();
								r2=0;
								
								break;
							default:
								cout<<"Opcion no valida\n\n\n";
							break;
							
						}//Fin de las opciones
						cout<<"Volver al menu?1 .-Si,2.-No: ";
						cin>>r2;
						m->~Matriz();
					}//Fin del while de las opciones de la matriz de 5x5
				
				break;
				
				case 2:
					
					r2=1;
						
					while(r2==1){
						
						cout<<"Menu\n\n";
						cout<<"1. Suma de matrices"<<endl;	
						cout<<"2. Resta de matrices"<<endl;
						cout<<"3. Multiplicacion por un escalar"<<endl;
						cout<<"4. Salir del submenu"<<endl;
						cout<<"Ingrese una opcion: ";
						cin>>op2;
						cout<<"\n\n\n";
						
						switch(op2){
							
							case 1:
								
							break;
							
							case 2:
								
							break;
							
							case 3:
								
							break;
							
							case 4:
								
								m->~Matriz();
								r2=0;
								
								break;
							default:
								cout<<"Opcion no valida\n\n\n";
							break;
							
						}//Fin de las opciones
						cout<<"Volver al menu?1 .-Si,2.-No: ";
						cin>>r2;
					}//Fin del while de las opciones de la matriz de numeros aleatorios
				
				break;
				
				default:
					cout<<"Opcion no valida\n\n\n";
				break;
			}//Fin del switch del inicio del programa
			cout<<"Volver al inicio?1 .-Si,2.-No: ";
			cin>>r;
		}//Fin del while del menu
	
		system("pause");
		return 0;
		
	}//Fin del main
	
	void printMatriz(Matriz* matriz,int size){
    	for(int i=0;i<size;i++){
        	for(int j=0;j<size;j++){
        		cout<<"["<<matriz->getMatriz()[i][j]<<"]";
			}//Fin del for de impresion
			cout<<"\n";
    }//Fin del for de impresion
}//Fin del metodo para imprimir la matriz
