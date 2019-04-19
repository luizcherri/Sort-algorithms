#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Tamanho do vetor : ";
    cin >> n;
    int vetor[n],aux,i=0,cont=0,j=0;

    while(i<n){
        vetor[i]=0;
        i++;
    }

    i=0;

    cout << "Digite os valores : ";
    while(i<n){
        cin >> vetor[i];
        i++;
    }

    for(cont=0;cont<i;cont++){
        for(j=cont+1;j<i;j++){
            if(vetor[cont]>vetor[j]){
                aux=vetor[cont];
                vetor[cont]=vetor[j];
                vetor[j]=aux;
            }
        }
    }

    i=0;

    cout << ("---------------------------------------------------------") << endl;

    cout << ("Impressao do vetor ordenado : ");

    while(i<n){
        cout << vetor[i] << "  ";
        i++;
    }
}
