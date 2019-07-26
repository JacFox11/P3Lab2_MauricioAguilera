#include <stdio.h>
#include<iostream>
#include <vector>
#include <bits/stdc++.h>
#include <string.h>
#ifndef VECTORES_CPP
#define VECTORES_CPP
using namespace std;

class Vectores{
	private:
		vector<string> op;
		vector<bool> exito;
	public:
		
		Vectores(){
			
		}
		
		void setOp(vector<string> x){
			op=x;
		}
		
		vector<string> getOp(){
			return op;
		}
		
		void setExito(vector<bool> x){
			exito=x;
		}
		
		vector<bool> getExito(){
			return exito;
		}
		
		void addOp(string x){
			op.push_back(x);
		}
		
		void addExito(bool x){
			exito.push_back(x); 
		}
		
		void imprimir(){
			for (int i=0;i<op.size() ; i++){
				if (exito.at(i)==true ){
					cout<<i+1<<") "<<op.at(i)<<": exito"<<endl; 
				}else{
					cout<<i+1<<") "<<op.at(i)<<": fallido"<<endl; 
				}
			}
		}
		~Vectores(){
		}
};

#endif
