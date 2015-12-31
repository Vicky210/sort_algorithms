#include<iostream>
void QuickSort(int A[],int start,int end){
	if(start>=end)
		return;
	int p_index=Partition(A,start,end);
	QuickSort(A,start,p_index-1);
	QuickSort(A,p_index+1,end);
}
int Partition(int A[],start,end){
	int pivot = A[end];
	int p_index = start;
	int temp;
	for(i=0;i<n,i++)
		if(A[i]<=pivot){
			temp = A[i];
			A[i]=A[p_index];
			A[p_index]=temp;
			p_index++;
		}
	temp = A[p_index];
	A[p_index]=A[end];
	A[end]=temp;
	return p_index;
}
int main(){
	return 0;
} 	
