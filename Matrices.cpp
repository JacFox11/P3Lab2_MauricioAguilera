#include <iostream>
#include <ctime>
#include <cstdlib>
#include <bits/stdc++.h>
#ifndef MATRICES_CPP
#define MATRICES_CPP
using namespace std;

class Matrices{
	private:
		int height;
		int width;
		int ** matriz;
	public:
		
		
		
		
		Matrices(){
			height=5;
			width=5;
			matriz=llenarm(height, width);
		}
		
		Matrices(int x, int y){
			height=x;
			width=y;
			matriz=llenarm(height, width);
		}
		
		bool Suma(int ** m, int a, int b){
			if (height== a && width == b){
					cout<<"La suma de las matrices es:"<<endl;
				for (int i=0; i<height; i++){
					for (int j=0; j<width; j++){
						cout<<"["<<matriz[i][j]+m[i][j]<<"]";
						matriz[i][j]=matriz[i][j]+m[i][j];
					}
					cout<<endl;
				}
				return true;
			}else{
				cout<<"No se pudo realizar la operacion"<<endl;
				return false;
			}
		}
		
		bool Resta(int **m, int a, int b){
			if (height== a && width == b){
					cout<<"La resta de las matrices es:"<<endl;
				for (int i=0; i<height; i++){
					for (int j=0; j<width; j++){
						cout<<"["<<matriz[i][j]-m[i][j]<<"]";
						matriz[i][j]=matriz[i][j]-m[i][j];
					}
					cout<<endl;
				}
				return true;
			}else{
				cout<<"No se pudo realizar la operacion"<<endl;
				return false;
			}
		}
		
		void Multi(int x){
			cout<<"La multiplicacion de las matrices es:"<<endl;
			for (int i=0; i<height; i++){
				for (int j=0; j<width; j++){
					cout<<"["<<x*matriz[i][j]<<"]";
					matriz[i][j]=x*matriz[i][j];
				}
				cout<<endl;
			}
		}
		
		int ** llenarm(int x, int y){//lenar matriz
			int ** m=new int*[x];
			for (int i=0; i<x; i++){
				m[i]= new int[y];
			}
			
			srand(time(0));
			for (int i=0; i<x; i++){
				for (int j=0; j<y; j++){
					m[i][j]=(rand() % 20)+1;
				}
			}
			for (int i=0; i<x; i++){
				for (int j=0; j<y; j++){
					cout<<"["<<m[i][j]<<"]";
				}
				cout<<endl;
			}
			system("pause");
			return m;
		}
		
		
		~Matrices(){
		}
		
		
		
};

#endif
