#include<iostream>

#define MAX 300
using namespace std;

class ListaFisica {
public:
    int vet[MAX];
    int quantidade = 0;

    ListaFisica(){} //Construtor Vazio
    ~ListaFisica(){} //Destrutor 

    void insere(int vet[]){
        while(scanf("%d",&vet[quantidade])>0){
            quantidade++;
        }
    }

    void insereRandom(int vet[]){
        for(int i=1; i<=100;i++){
            for(int j=0; j<i; j++)
                vet[j] = 1+(rand()%1000);

            //manda o vetor pra função
        }
    }
};

void insertSort(int vet[], int quantidade){
    int valor, j, numAcesso=0;
    for(int i=1; i<quantidade;i++){
        valor = vet[i];
        numAcesso++;
        j = i-1;
        while(valor < vet[j] && j>=0){
            vet[j+1] = vet[j];
            numAcesso++;
            j--;   
        }
        vet[j+1] = valor;
        numAcesso++;
        for(int k=0; k<quantidade;k++){
            cout << vet[k] << " ";
        }
        cout << endl;
    }
    cout << numAcesso << endl;
}



int main(){

    ListaFisica listaEst;
    
    listaEst.insere(listaEst.vet);

    insertSort(listaEst.vet,listaEst.quantidade);
  
    return 0;
}