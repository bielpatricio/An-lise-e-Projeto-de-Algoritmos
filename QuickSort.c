#include<stdio.h>
#include<stdlib.h>

void QuickSort(int *vector, int start, int end){
	if(start >= end)
		return;
		
	int pivot;
	pivot = partition(vector, start, end);
	QuickSort(vector, start, pivot-1);
	QuickSort(vector, pivot+1, end);
}

int partition(int *vector, int start, int end){
	int j, i=start;
	for(j=start; j<end; j++){
		if(vector[j]<=vector[end]){
			swap(vector, i++, j);
		}
	}swap(vector, i, end);
	return i;
}

void swap(int *vector, int x, int y){
	int aux;
	aux = vector[x];
	vector[x] = vector[y];
	vector[y] = aux;
}

main(){
	int vector[]={3, 4, 10, 9, 5, 7, 0, 8, 2, 1, 6};
	int start=0, end=10, i;
	
	QuickSort(vector, start, end);
	for(i=start; i<=end; i++){
		printf("%d ", vector[i]);
	}
}
