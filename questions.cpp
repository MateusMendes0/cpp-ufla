#include <iostream>
using namespace std;

int main()
{
    int lines = 5, collums = 10;
    
    char matriz[lines][collums];
    
    char answers[collums];
    
    int notas[lines], nota;
    
    for (int i=0; i < lines; i++){
		for (int j=0; j < collums; j++){
			cin >> matriz[i][j];
			}
		}
	for (int i=0; i < collums; i++){
		cin >> answers[i];
		}
		
	for (int i=0; i < lines; i++){
		nota = 0;
		for (int j=0; j < collums; j++){
			if (matriz[i][j] == answers[j])
				nota++;
			}
		notas[i]=nota;
		}
	for (int i=0; i < lines; i++){
		cout << "Aluno "<<i <<": " << notas[i];
		}
    return 0;
}
