#include <iostream>
#include <stdio.h>
#include "Matrices.cpp"
#include "Vectores.cpp"

using namespace std;

int main(){ 
    char opcion;
    Vectores v=Vectores();
    do{
        system("cls"); 
        cout<<endl<<"...:::MENU:::...\n"
        "1-Usar Constructor vacio para la matriz (5x5)\n"
        "2-Ingresar paramentros de la matriz\n"
        "3-Imprimir bitacora\n"
		"4-Salir\n";
        cout<<endl<<"Ingrese una opcion:";
        cin>>opcion;
        switch(opcion){
        case '1':{
			Matrices m1= Matrices();//primera mattriz 5x5
            system("cls");
            char opcion2;
		        cout<<endl<<"...:::OPERACION:::...\n"
		        "1-Suma de Matrices\n"
		        "2-Resta de matrices\n"
		        "3-Multiplicacion de matrices\n"
				"4-Regresar\n";
		        cout<<endl<<"Ingrese una opcion:";
		        cin>>opcion2;
		        
		        switch(opcion2){
		        case '1': //suma de matriz 5x5
		             system("cls");
		            char opcion3;
				        cout<<endl<<"...:::SEGUNDA MATRIZ:::...\n"
				        "1-Usar matriz predeterminada (5x5)\n"
				        "2-Ingresar paramentros de la matriz\n"
				        "3-Regresar\n";
				        cout<<endl<<"Ingrese una opcion:";
				        cin>>opcion3;
				        
				        switch(opcion3){
				        case '1': {//suma de matriz 5x5 con 5x5
				            system("cls");
				            int **m=m1.llenarm(5, 5);
				            bool temp=m1.Suma(m, 5, 5);
							v.addOp("Suma");
							v.addExito(temp);  
							m1.~Matrices() ;
				             break; 
						}
				        case '2': {//suma de matriz 5x5 con dimensiones cambiables
				            system("cls");
				            int x,y;
				            cout<<"Ingrese el alto de la matriz: ";
				            cin>>x;
				            cout<<"Ingrese el ancho de la matriz: ";
				            cin>>y;
				            system("cls");
				            int **m=m1.llenarm(x, y);
				            bool temp=m1.Suma(m, x, y);
							v.addOp("Suma");
							v.addExito(temp);
							m1.~Matrices() ; 
				             break;
				         }
				        case '3':
				            cout<<endl; 
				            break;           
				        default: system("cls");
				                 cout<<"Esta opcion no existe..."<<endl; 
				                 system("pause");
				                 break;
				    }            
		             break;      
		        case '2': 
		             system("cls");   
					opcion3;
				        cout<<endl<<"...:::SEGUNDA MATRIZ:::...\n"
				        "1-Usar matriz predeterminada (5x5)\n"
				        "2-Ingresar paramentros de la matriz\n"
				        "3-Regresar\n";
				        cout<<endl<<"Ingrese una opcion:";
				        cin>>opcion3;
				        
				        switch(opcion3){
				        case '1': {
				            system("cls");
				            int **m=m1.llenarm(5, 5);
				            bool temp=m1.Resta(m, 5, 5);
							v.addOp("Resta");
							v.addExito(temp);  
							m1.~Matrices() ;
				             break; 
						}
				        case '2': {
				            system("cls");
				            int x,y;
				            cout<<"Ingrese el alto de la matriz: ";
				            cin>>x;
				            cout<<"Ingrese el ancho de la matriz: ";
				            cin>>y;
				            system("cls");
				            int **m=m1.llenarm(x, y);
				            bool temp=m1.Resta(m, x, y);
							v.addOp("Resta");
							v.addExito(temp);  
							m1.~Matrices() ;
				             break;
				         }
				        case '3':
				            cout<<endl; 
				            break;           
				        default: system("cls");
				                 cout<<"Esta opcion no existe..."<<endl; 
				                 system("pause");
				                 break;
				    }            
		             break;
		    	case '3':
		    		system("cls");
		    		int x;
		    		cout<<"Ingrese el que quiera multiplicar la matriz: ";
		    		cin>>x;
		    		system("cls");
		    		m1.Multi(x);
					v.addOp("Multipliacion");
					v.addExito(true);  
		    		break;
		        case '4':
		             cout<<endl; 
		             break;           
		        default: system("cls");
		                 cout<<"Esta opcion no existe..."<<endl; 
		                 system("pause");
		                 break;
		    }            
             break;
		}
        case '2': {
            system("cls");  
			int x,y;
			cout<<"Ingrese el alto de la matriz: ";
			cin>>x;
			cout<<"Ingrese el ancho de la matriz: ";
			cin>>y;
			Matrices m1= Matrices(x, y); 
			m1.~Matrices();
            system("cls");
            char opcion2;
		        cout<<endl<<"...:::OPERACION:::...\n"
		        "1-Suma de Matrices\n"
		        "2-Resta de matrices\n"
		        "3-Multiplicacion de matrices\n"
				"4-Regresar\n";
		        cout<<endl<<"Ingrese una opcion:";
		        cin>>opcion2;
		        
		        switch(opcion2){
		        case '1': 
		             system("cls");
		            char opcion3;
				        cout<<endl<<"...:::SEGUNDA MATRIZ:::...\n"
				        "1-Usar matriz predeterminada (5x5)\n"
				        "2-Ingresar paramentros de la matriz\n"
				        "3-Regresar\n";
				        cout<<endl<<"Ingrese una opcion:";
				        cin>>opcion3;
				        
				        switch(opcion3){
				        case '1': {
				            system("cls");
				            int **m=m1.llenarm(5, 5);
				            bool temp=m1.Suma(m, 5, 5);
							v.addOp("Suma");
							v.addExito(temp);  
							m1.~Matrices();
							
				             break;   
						}
				        case '2': {
				            system("cls");
				            cout<<"Ingrese el alto de la matriz: ";
				            cin>>x;
				            cout<<"Ingrese el ancho de la matriz: ";
				            cin>>y;
				            system("cls");
				            int **m=m1.llenarm(x, y);
				            bool temp=m1.Suma(m, x, y);
							v.addOp("Suma");
							v.addExito(temp);  
							m1.~Matrices() ;
				             break;
				         }
				        case '3':
				            cout<<endl; 
				            break;           
				        default: system("cls");
				                 cout<<"Esta opcion no existe..."<<endl; 
				                 system("pause");
				                 break;
				    }            
		             break;      
		        case '2': 
		             system("cls");   
					opcion3;
				        cout<<endl<<"...:::SEGUNDA MATRIZ:::...\n"
				        "1-Usar matriz predeterminada (5x5)\n"
				        "2-Ingresar paramentros de la matriz\n"
				        "3-Regresar\n";
				        cout<<endl<<"Ingrese una opcion:";
				        cin>>opcion3;
				        
				        switch(opcion3){
				        case '1': {
				            system("cls");
				            int **m=m1.llenarm(5, 5);
				            bool temp=m1.Resta(m, 5, 5);
							v.addOp("Resta");
							v.addExito(temp);  
							m1.~Matrices() ;
				             break;  
						}
				        case '2': {
				            system("cls");
				            cout<<"Ingrese el alto de la matriz: ";
				            cin>>x;
				            cout<<"Ingrese el ancho de la matriz: ";
				            cin>>y;
				            system("cls");
				            int **m=m1.llenarm(x, y);
				            bool temp=m1.Resta(m, x, y);
							v.addOp("Resta");
							v.addExito(temp);  
							m1.~Matrices() ;
				             break;
				         }
				        case '3':
				            cout<<endl; 
				            break;           
				        default: system("cls");
				                 cout<<"Esta opcion no existe..."<<endl; 
				                 system("pause");
				                 break;
				    }            
		             break;
		    	case '3':
		    		system("cls");
		    		cout<<"Ingrese el que quiera multiplicar la matriz: ";
		    		cin>>x;
		    		system("cls");
		    		m1.Multi(x);
					v.addOp("Multipliacion");
					v.addExito(true);  
					m1.~Matrices() ;
		    		break;
		        case '4':
		             cout<<endl; 
		             break;           
		        default: system("cls");
		                 cout<<"Esta opcion no existe..."<<endl; 
		                 system("pause");
		                 break;
		    }              
             break;
         }
    	case '3': 
             system("cls");  
			 v.imprimir();       
             break;
        case '4':
             cout<<endl; 
             break;           
        default: system("cls");
                 cout<<"Esta opcion no existe..."<<endl; 
                 system("pause");
                 break;
    } 
	system("pause");           
	}while(opcion!='4');
}


