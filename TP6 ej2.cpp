#include<iostream>
using namespace std;

class triangulo {
	
	private:
		int ladoA;
		int ladoB;
		
	public:
		void iniciar();
		void ladoMayor();
		void equilatero();
	
};

void triangulo::iniciar(){
	
	cout<<"cuanto mide el primer lado de su juan triangulo?: "; cin>>ladoA;
	cout<<"cuanto mide el segundo lado de su juan triangulo?: "; cin>>ladoB;
	
}

void triangulo::ladoMayor(){
	
	if(ladoA > ladoB){
		
		cout<<"el primer lado ("<<ladoA<<") es mayor al segundo lado ("<<ladoB<<")"<<endl;
		
	}
	
	else if (ladoA < ladoB) {
		
		cout<<"el segundo lado ("<<ladoB<<") es mayor al primer lado ("<<ladoA<<")"<<endl;
		
	}
	
	else if (ladoA == ladoB) {
		
		cout<<"ambos lados miden lo mismo ("<<ladoA<<")"<<endl;
		
	}
	
}

void triangulo::equilatero(){
	
	if(ladoA == ladoB){
		
		cout<<"el juan triangulo es equilatero"<<endl;
		
	}
	
	else {
		
		cout<<"el juan triangulo NO es equilatero"<<endl;
		
	}
	
}



int main(){
	
	triangulo t1, t2;
	
	cout<<"juan triangulo 1"<<endl;
	t1.iniciar();
	t1.ladoMayor();
	t1.equilatero();
	
	cout<<endl;
	
	cout<<"juan triangulo 2"<<endl;
	t2.iniciar();
	t2.ladoMayor();
	t2.equilatero();
	
}