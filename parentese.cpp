#include <iostream>

using namespace std;
int main(){
	string expression;
	int cont=0, cont2=0;
	getline(cin,expression);
	for (char letra : expression){
		if (letra == '(' ){
			cont++;
			}
		if (letra == ')'){
			cont2++;
			}
		
		}
	if (cont == cont2){
		cout << "parenteses corretos";
		}
	else{
		cout << "parenteses incorretos";
		}
	return 0;
}

//((1+2
