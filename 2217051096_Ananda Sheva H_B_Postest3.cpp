#include <iostream>
using namespace std;
int main () {
	int btc;
	cout<<"Input amount of BTC :  ";
	//input
	cin>>btc;
	
	//Tipe Rangking
	if (btc<1){
		cout<<"Tipe Rangking : SHRIMP";
	} else if (btc>=1&&btc<10){
		cout<<"Tipe Rangking : CRAB";
	} else if (btc>=10&&btc<50){
		cout<<"Tipe Rangking : OCTOPUS";
	} else if (btc>=50&&btc<100){
		cout<<"Tipe Rangking : FISH";
	} else if (btc>=100&&btc<500){
		cout<<"Tipe Rangking : DOLPHIN";
	} else if (btc>=500&&btc<1000){
		cout<<"Tipe Rangking : SHARK";
	} else if (btc>=1000&&btc<5000){
		cout<<"Tipe Rangking : WHALE";
	} else if (btc>=5000){
		cout<<"Tipe Rangking : HUMPBACK";
	}
	
	return 999;	
}



	

