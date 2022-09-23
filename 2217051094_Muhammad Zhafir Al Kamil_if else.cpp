#include <iostream>
using namespace std;
int main(){
	
	int bilangan;
	cin>>bilangan;
	if(bilangan>0){
		cout<<"Bilangan Positif\n";
		if(bilangan%4==0){
		cout<<"Bilangan Genap";
	}else if(bilangan%4==1){
		cout<<"Bilangan Ganjil\n";
	}
 
	}else{
		cout<<"Bilangan Negatif\n";
	}
	return 0;
}
