#include<stdio.h>
#include<stdlib.h>

countingSort(int A[], int max, int num){
	int i, j, C[max], B[num];
	
	for(i=0; i<max; i++){
		C[i]=0;
	}
	
	for(j=0; j<num; j++){
		C[A[j]] = C[A[j]]+1;
	}
	
	for(i=1; i<max; i++){
		C[i] = C[i]+C[i-1];
	}
	
	for(j=num-1; j>=0; j--){
		B[C[A[j]]-1] = A[j];
		C[A[j]] = C[A[j]] -1;
	}
	
	for(i=0; i<num; i++)
		printf("%d ", B[i]);
}

#define num 10
#define max 8

main(){
	int i, A[]= {7, 3, 5, 6, 7, 2, 3, 1, 0, 1};
	
	for(i=0; i<num; i++)
		printf("%d ", A[i]);
		
	printf("\n\n\n\n\n");

	countingSort(A, max, num);
}
