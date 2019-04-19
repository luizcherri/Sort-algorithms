#include <stdlib.h>
#include <iostream>
using namespace std;


void quick(int v[] , int p,int r);
int partition(int v[] , int p,int r);

void quickSort(int v[] , int t){
    int p=0,r=t-1;
    quick(v , p,r);
}

void quick(int v[] , int p,int r){
    int q;
    if(p<r){
        q=partition(v , p,r);
        quick(v , p,q-1);
        quick(v , q+1,r);
    }
}

void troca (int *a , int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

int partition(int v[] , int p,int r){
    int i,j;
    int x;
    x=v[r];
    i=p-1;
    for(j=p;j<=r-1;++j){
        if(v[j]<=x){
            i++;
            troca(&v[i],&v[j]);
        }
    }
    troca(&v[i+1],&v[r]);
    return i+1;
}

int main (){
    int n;
    cout << "Tamanho do vetor : ";
    cin >> n;
    int v[n];

    cout << "Elementos : ";
    for (int i = 0 ; i < n ; i++){
            cin >> v[i];
    }

    quickSort(v , n);

    cout << endl;
    for (int i = 0 ; i < n ; i++){
            cout << v[i] << "   ";
    }
}
