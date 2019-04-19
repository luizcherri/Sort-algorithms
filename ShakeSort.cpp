#include <iostream>
#include <stdlib.h>
using namespace std;

void swap (int v[] , int a , int b){
    int aux = v[a];
    v[a] = v[b];
    v[b] = aux;

}

void ss (int v[], int n){
    int left       = 0;
    int right      = n-1;
    int lastSwap   = 0;

    while (left < right){
        // smallest element towards left
        for (int i = right; i > left; --i){
            if (v[i-1] > v[i]){
                swap(v , i, i-1 );
                lastSwap = i; // save index
            }
        }
        left = lastSwap;

        // greatest element towards right
        for (int i = left; i < right; ++i){
            if (v[i] > v[i+1]){
                swap(v , i, i+1 );
                lastSwap = i; // save index
            }
        }
        right = lastSwap;
    }
}

int main (){
    int n;
    cout << "Tamanho do vetor : ";
    cin >> n;
    int v[n];
    cout << "Elementos do vetor : ";
    for (int i = 0 ; i < n ; i++){
        cin >> v[i];
    }

    ss (v , n);
    cout << "Ordenado fica : ";
    for (int i = 0 ; i < n ; i++){
        cout << v[i] << "  ";
    }

}
