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
			matriz=llenarm(matriz, 5, 5);
		}
		
		Matrices(int x, int y){
			height=x;
			width=y;
		}
		
		Suma(int ** m){
			if ()
		}
		
		int ** llenarm(int ** m, int x, int y){
			m=new int *[x];
			for (int i=0; i<y; i++){
				m[i]= new int[y];
			}
			
			srand(time(0));
			for (int i=0; i<5; i++){
				for (int j=0; j<5; j++){
					m[x][y]=(rand() % 20)+1;
				}
			}
			return m;
		}
		
		
		
};

#endif
