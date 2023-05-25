#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int tamanho, vertical_s=1, horizontal_s=0;

    ofstream arquivo("jogo.txt");

    cin >> tamanho;

    while (vertical_s <= tamanho){
        if (vertical_s%2 == 0){
            while (horizontal_s < tamanho){

                horizontal_s++;
                arquivo << "#";
                if (horizontal_s == tamanho){
                    break;
                }
                arquivo<< ".";
                horizontal_s++;
            }
            }
        else{
            while (horizontal_s < tamanho)
            {
                horizontal_s++;
                arquivo << ".";
                if (horizontal_s == tamanho){
                    break;
                }
                arquivo<< "#";
                horizontal_s++;
            }
            }
        arquivo<<endl;
        vertical_s++;
        horizontal_s=0;
            
        }
        return 0;
        }