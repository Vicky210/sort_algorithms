#include<iostream>
void QuickSort(int A[],int start,int end){
	if(start>=end)
		return;
	int p_index=Partition(A,start,end);
	QuickSort(A,start,p_index-1);
	QuickSort(A,p_index+1,end);
}
void Partition(int A[],start,end){
	int pivot = A[end];
	int p_index = start;
	for(i=0;i<n,i++)
		if(A[i]<=pivot){
			swap(A[i],A[p_index]);
			p_index++;
		}
}
int main(){
	return 0;
} 	
