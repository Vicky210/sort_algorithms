#include<iostream>
void Merge(int L[],int R[],int A[],int nL,int nR){
	int i=0,j=0,k=0;
	while(i<nL && j<nR){
		if(L[i]<=R[j]){
			A[k]=L[i];
			i++;
		}
		else{
			A[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<nL){
		A[k]=A[i];
		i++;
		k++;
	}
	while(j<nR){
		A[k]=A[j];
		j++;
		k++;
	}
}
void MergeSort(int A[],int n){
	int mid = n/2;
	int i;
	int left[mid];
	int right[n-mid];
	for(i=0;i<mid;i++)
		left[i]=A[i];
	for(i=mid;i<n;i++)
		right[i-mid]=A[i];
	MergeSort(left,mid);
	MergeSort(right,n-mid);
	Merge(left,right,A,mid,n-mid);
}
int main(){
	return 0;
}
