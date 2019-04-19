void SelectionSort (int l[], double v[], int d[], int ord[], int Nitens){
     int aux;
     for (int i = 0 ; i<Nitens ; i++) {
         aux = i;
         for (int j = i ; j<Nitens ; j++) {
             if (v[aux]*l[j] < v[j]*l[aux]){
                aux = j;
             }
         }
         swap (v , aux , i);
         swap (l , aux , i);
         swap (d , aux , i);
         swap (ord , aux , i);
     }
}
