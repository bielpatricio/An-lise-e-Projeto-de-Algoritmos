#include<stdio.h>
#include<stdlib.h>

MergeSort(int *Vector, int ini, int fim){
	int mei;
	
	if( ini < fim ){
		mei = (ini + fim)/2;
		MergeSort(Vector, ini, mei);
		MergeSort(Vector, mei+1, fim);
		Merge(Vector, ini, mei, fim);
	}
	
}

Merge(int *Vector, int ini, int mei, int fim){
	
	int Tam = fim -ini, i, j, k;
	int Aux[Tam+1];
	
	for(i=ini, j=mei+1, k=0; i<=mei && j<=fim; k++){
		
		if(Vector[i]<=Vector[j]){
			Aux[k]=Vector[i];
			i++;
		}
		else{
			Aux[k]=Vector[j];
			j++;
		}
	}
	
	while(i <= mei){
		Aux[k] = Vector[i];
		k++; 
		i++;
	} 

	while(j <=fim){
		Aux[k] = Vector[j];
		k++;
		j++;
	}
	
	for(i=ini; i<=fim; i++) {
		Vector[i] = Aux[i-ini];
	}
	
}
main(){
	int Vector[]={3, 4, 10, 9, 5, 7, 0, 8, 2, 1, 6};
	int ini=0, fim=10, i;
	
	MergeSort(Vector, ini, fim);
	for(i=ini; i<=fim; i++){
		printf("%d ", Vector[i]);
	}
}
