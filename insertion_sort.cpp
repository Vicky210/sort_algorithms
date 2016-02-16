#include<iostream>
void Insertion_sort(int A[],int n){
	int i;
	for(i=1;i<n;i++){
		int current = A[i];
		int current_index = i;
		while(current_index>0 && A[current_index--]>A[current_index]){
			A[current_index]=A[current_index--];
			current_index--;
		}
		A[current_index]=current;
	}
}
int main(){
	return 0;
}
