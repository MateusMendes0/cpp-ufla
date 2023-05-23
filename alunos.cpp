#include <iostream>
using namespace std;

int main()
{
	
int alunos = 10, provas=3;
    int matriz[alunos][provas], menor=0, menorprova;

	int cont1=0, cont2=0, cont3 = 0;
    
    for(int i=0; i<alunos; i++){
		for(int j=0; j<provas;j++){
			cin >> matriz[i][j];
			}
		}
		
	for(int i=0; i<alunos; i++){
		for(int j=0; j<provas;j++){
			if (j==0){
				menor = matriz[i][j];
				menorprova = 0;
				}
			if (matriz[i][j] < menor and matriz[i][j]!= menor){
				menor = matriz[i][j];
				menorprova = j;
				}
			}
		if (menorprova==0){
			cont1++;
		}
		else if (menorprova==1){
			cont2++;
			}
		else{
			cont3++;
			}
		}
    cout << "PIOR PROVA 1 : " << cont1 << endl;
    cout << "PIOR PROVA 2 : " << cont2 << endl;
    cout << "PIOR PROVA 3 : " << cont3 << endl;
    
    
    return 0;
}
