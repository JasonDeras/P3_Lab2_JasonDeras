#include<iostream>
#include<string>
using namespace std;

	int main(){
		
		int op;
		int r=1;
		int op2;
		int r2;
		int escalar;
		
		while (r==1){
			
			cout<<"Menu\n\n";
			cout<<"1. Matriz 5x5 aleatoria"<<endl;	
			cout<<"2. Matriz solo con los numeros aleatorios"<<endl;
			cout<<"Ingrese una opcion: ";
			cin>>op;
			cout<<"\n\n\n";
			
			switch(op){
				
				case 1:
					
					r2=1:	
					while(r2==1){
						
						cout<<"Menu\n\n";
						cout<<"1. Suma de matrices"<<endl;	
						cout<<"2. Resta de matrices"<<endl;
						cout<<"3. Multiplicacion por un escalar"<<endl;
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
								
							default:
								cout<<"Opcion no valida\n\n\n";
							break;
							
						}//Fin de las opciones
						cout<<"Volver al menu?1 .-Si,2.-No: ";
						cin>>r2;
					}//Fin del while de las opciones de la matriz de 5x5
				
				break;
				
				case 2:
					
					r2=1:
						
					while(r2==1){
						
						cout<<"Menu\n\n";
						cout<<"1. Suma de matrices"<<endl;	
						cout<<"2. Resta de matrices"<<endl;
						cout<<"3. Multiplicacion por un escalar"<<endl;
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
