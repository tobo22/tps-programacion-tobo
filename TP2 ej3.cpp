#include<iostream>
using namespace std;

void duplicar(int num[4]);
int insertar(int num[4]);
int c(int num[4]);


int main(){
	
	int num [4] = {0, 22, 72};

	cout<<"duplicacion de juanes:"<<endl;
	duplicar(num);

	system("pause");
	system("cls");
	
	cout<<"insertacion de juanes:"<<endl;
	insertar(num);
	
	system("pause");
	system("cls");
	
	cout<<"eliminaciones de juanes nulos:"<<endl;
	c(num);

	

	
}
	



///
void duplicar(int num[4]) {
	
	for(int i=0; i < 3; i++){
		
	num[i]=num[i]+num[i];
	cout<<num[i]<<endl;
	
	}

}

///
int insertar(int num[4]){
	
	int juan;
	int pos;
	
	cout<<"inserte un juan: ";cin>>juan;
	cout<<"ahora inserte la posicion en la que lo pondra: ";cin>>pos;
	
	if(pos > 4){
	
	cout<<"syntrax error"<<endl;
	return 0;
	
	}
	
	else if(pos <= 0){
	
	cout<<"syntrax error"<<endl;
	return 0;	
	
	}
	
	else{
	
	
	for(int i=2; i > pos-2; i--){
	
	num[i+1] = num[i];
	
	}
	
	num[pos-1] = juan;
	
	for(int i=0; i < 4; i++){
		
	if(i == pos-1){
	
	cout<<num[i]<<" (tu juan)"<<endl;
	
	}
	
	else {
		
	cout<<num[i]<<endl;	
	
	}
	
	}
	
	}
}


///
int c(int num[4]){

	int i = 0;
	
	while(i < 4){
		
	if(num[i] == 0){
	
	cout<<"el juan "<<i+1<<" es igual a cero, sera eliminado"<<endl;
	
	for(i; i > 0; i++) {
		
	num[i]=num[i];
	
	}
	
	}

	i++;
	
	}
	
	for(int i=0; i < 3; i++){
		
	cout<<num[i]<<endl;
	
	}
	
}