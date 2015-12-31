#include<iostream>
void selection_sort(int A[],int n){
	int min,min_index,i,j; 
	for(i=0;i<n;i++){
		min=A[i];
		min_index=i;
		for(j=i;j<n;j++)
			if(A[j]<min){
				min = A[j];
				min_index = j;
			}
		A[min_index]=A[i];
		A[i]=min;
	}
}
int main(){
	return 0;
}
