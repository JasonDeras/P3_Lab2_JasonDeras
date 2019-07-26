#include<iostream>
#include<string>
#include "Matriz.cpp"
#include<vector>
#include<bits/stdc++.h>

using namespace std;

void printMatriz(Matriz*,int size);
void printMatriz2(Matriz*,int fila,int columna);

	int main(){
		
		int op;
		int r=1;
		int op2;
		int r2;
		int escalar;
		int filas;
		int cols;
		Matriz* m;
		Matriz *m2;
		vector<string>lista;
		vector<string>lista2;
		int **m3;
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
								m2=new Matriz(filas,cols);
								cout<<"\n\n\n";
								cout<<"Matriz creada de las dimensiones creadas"<<endl;
								printMatriz2(m2,filas,cols);
								cout<<"\n\n\n";
								m->suma(m2);
								
								if(m->suma(m2)){
									lista.push_back("Suma: esitoso");
								}else {
									lista.push_back("Suma: fallido");
								}
								
							break;
							
							case 2:
								m=new Matriz();
								cout<<"Matriz creada automaticamente"<<endl;
								printMatriz(m,5);
								cout<<"\n\n\n";
								cout<<"Ingrese la anchura de la matriz a sumar: ";
								cin>>filas;
								cout<<"Ingrese la columnas de la matriz a sumar: ";
								cin>>cols;
								m2=new Matriz(filas,cols);
								cout<<"\n\n\n";
								cout<<"Matriz creada de las dimensiones creadas"<<endl;
								printMatriz2(m2,filas,cols);
								cout<<"\n\n\n";
							break;
							
							case 3:
								cout<<"Matriz creada automaticamente"<<endl;
								printMatriz(m,5);
								cout<<"\n\n\n";
								cout<<"Ingrese el numero de multiplicacion: ";
								cin>>escalar;
								cout<<"\n\n\n";
							break;
							
							case 4:
								cout<<"Bitacora"<<endl;
								for(int i=0;i<lista.size();i++){
									cout<<lista[i]<<endl;
								}//Fin del for de listar
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
						cout<<"\n\n\n";
					}//Fin del while de las opciones de la matriz de 5x5
				
				break;
				
				case 2:
					cout<<"Ingrese la anchura de la matriz: ";
					cin>>filas;
					cout<<"Ingrese la columnas de la matriz: ";
					cin>>cols;
					m2=new Matriz(filas,cols);
					r2=1;
						
					while(r2==1){
						
						cout<<"Menu\n\n";
						cout<<"1. Suma de matrices"<<endl;	
						cout<<"2. Resta de matrices"<<endl;
						cout<<"3. Multiplicacion por un escalar"<<endl;
						cout<<"4. Bitacora"<<endl;
						cout<<"5. Salir del submenu"<<endl;
						cout<<"Ingrese una opcion: ";
						cin>>op2;
						cout<<"\n\n\n";
						
						switch(op2){
							
							case 1:
								cout<<"Matriz creada"<<endl;
								printMatriz2(m2,filas,cols);
							break;
							
							case 2:
								
							break;
							
							case 3:
								cout<<"Matriz creada automaticamente"<<endl;
								//printMatriz(m2,filas,cols);
								cout<<"\n\n\n";
								cout<<"Ingrese el numero de multiplicacion: ";
								cin>>escalar;
								cout<<"\n\n\n";
							break;
							
							case 4:
								cout<<"Bitacora"<<endl;
								cout<<"Bitacora"<<endl;
								for(int i=0;i<lista2.size();i++){
									cout<<lista2[i]<<endl;
								}//Fin del for de listar
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
	
	void printMatriz2(Matriz* matriz,int filas,int cols){
		
    	for(int i=0;i<filas;i++){
        	for(int j=0;j<cols;j++){
        		cout<<"["<<matriz->getMatriz()[i][j]<<"]";
			}//Fin del for de impresion
			cout<<"\n";
    	}//Fin del for de impresion
	}//Fin del metodo para imprimir la matriz
