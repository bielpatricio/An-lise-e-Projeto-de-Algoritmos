#include<stdio.h>
#include<stdlib.h>

#define comprimento 10

int Pai(int i){
	int x;
	x=(i-1)/2;
	return x;
}

int FilhoEsquerdo(int i){
	int x;
	x=2*i+1;
	return x;
}

int FilhoDireito(int i){
	int x;
	x=2*i+2;
	return x;
}

MaxHeapify(int A[], int i, int tamanho_heap){
	int L, R, maior;
	L = FilhoEsquerdo(i);
	R = FilhoDireito(i);
	
	maior = i;
	
	if(L<= tamanho_heap && A[L] > A[maior]){
		maior = L;
	}
	
	if(R<=tamanho_heap && A[R] > A[maior]){
		maior=R;
	}
	
	if(maior!=i){
		trocar(A[i], A[maior]);
		MaxHeapify(A, maior, tamanho_heap);
	}
	 
}

BuildMaxHeap(int A[]){
	int i, tamanho_heap;
	tamanho_heap = comprimento;
	for(i=(comprimento/2)-1; i>=0; i--){
		MaxHeapify(A, i, tamanho_heap);
	}
}

int HeapSort(int A[]){
	BuildMaxHeap(A);
	
	int i, tamanho_heap;
	tamanho_heap = comprimento;
	
	for(i=(comprimento/2)-1; i>=0; i--){
		trocar(A[0], A[i]);
		tamanho_heap = tamanho_heap-1;
		MaxHeapify(A, 0, tamanho_heap);
		//printf("%d\n ", A[i]);
	}
	
}

trocar(int x, int y){
	int aux;
	aux = x;
	x=y;
	y=aux;
}

main(){
	int i, A[]= {7, 3, 5, 6, 7, 2, 3, 1, 0, 1};
	
	for(i=0; i<comprimento; i++)
		printf("%d ", A[i]);
		
	printf("\n\n\n\n\n");

	HeapSort(A);
	
	for(i=0; i<comprimento; i++)
		printf("%d ", A[i]);
}
