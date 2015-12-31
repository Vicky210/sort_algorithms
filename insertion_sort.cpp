#include<iostream.h>
#include<conio.h>
void Insertion_sort(int A[],int n){
	int i;
	for(i=0;i<n;i++){
		int current = A[i];
		int current_index = i;
		while(current_index>0 && A[current_index--]>A[current_index]){
			A[current_index]=A[current_index--];
			current_index--;
		}
		A[current_index]=current;
	}
}
void main(){

}
