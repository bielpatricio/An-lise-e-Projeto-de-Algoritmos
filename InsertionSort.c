#include<stdio.h>


InsertionSort(int x[], int Tam){
	int i, pivo, j;
	for(i=0; i<Tam; i++){
		pivo = x[i];
		j = i-1;
		while(x[j]>=0 && x[j] > pivo ){
			x[j+1] = x[j];
			x[j] = pivo;
			j=j-1;
		}
	
	}
}
#define Tam 8
main(){
	int i, x[Tam]={5, 7, 10, 4, 1, 3, 8, 6};
	for(i=0; i<Tam; i++){
		printf("%d\n", x[i]);
	}
	
	InsertionSort(x, Tam);
	printf("\nOrdenado\n");
	
	for(i=0; i<Tam; i++){
		printf("%d\n", x[i]);
	}
}
