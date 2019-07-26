#include <iostream>
#ifndef MATRICES_CPP
#define MATRICES_CPP
using namespace std;

class Matrices{
	private:
		int length;
		int width;
		int matriz;
	public:
		Rectangulo(){
			matriz=new int *[5];
			for (int i=0; i<5; i++){
				matriz[i]= new int[5];
			}
			
			
		}
		
		
		
};

#endif
