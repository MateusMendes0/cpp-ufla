#include <iostream>
#include <string>
using namespace std;
int main(){
	
	string str1, str2;
	char palavra[200];
	int indice, cont=0;
	cin >> str1 >> indice >> str2;
	
	for (int i=0;i<= int(str1.size()); i++){
		if (i==indice){
			for (int j=0; j < int(str2.size()); j++){
				palavra[cont] = str2[j];
				cont++;
			}
		}
			palavra[cont] = str1[i];
			cont++;
	}
	cout << palavra;
	
	
	return 0;
}
