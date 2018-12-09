#include<stdio.h>


SelectionSort(int x[], int Tam){
	int i, min, j, aux;
	for(i=0; i<Tam; i++){
		min = i;
		for(j=i+1; j <Tam; j++){
			if(x[j]<x[min]){
				min=j;
			}
			
		}if(x[i]!=x[min]){
				aux=x[i];
				x[i]=x[min];
				x[min]=aux;
			}
		
	}
}
#define Tam 8
main(){
	int i, x[Tam]={5, 7, 10, 4, 1, 3, 8, 6};
	//struct Lista *x;
	
	//while(x->next!=NULL){
	for(i=0; i<Tam; i++){
		printf("%d\n", x[i]);
	}
	
	SelectionSort(x, Tam);
	printf("\nOrdenado\n");
	
	for(i=0; i<Tam; i++){
		printf("%d\n", x[i]);
	}
}
