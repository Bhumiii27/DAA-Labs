#include<iostream>
using namespace std;
void merge(int a[],int low, int high, int mid){
	int l = mid - low +1;
	int r = high - mid;
	int lt[l];
	int rt[r];
	for(int i =0;i<l;i++){
		lt[i] =a[low+i];
	}
	for(int i =0;i<r;i++){
		rt[i] = a[mid+1+i];
	}
	int i = 0;
	int j = 0;
	int k = low;
	
	while(i<l && j <r){
		if(lt[i]<rt[j]){
			a[k++] = lt[i++];
		}else{
			a[k++] = rt[j++];
		}
	}
	while(i<l){
		a[k++] = lt[i++];
	}
	while(j<r){
		a[k++] = rt[j++];
	}
}
void merge_sort(int a[], int low, int high){
	if(l<h){
		int mid = l + (h-l)/2;
		merge_sort(a, l, mid);
		merge_sort(a, mid+1, high);
		merge(a, l, h,mid);
	}
}
void printArray(int a[],int size){
	for(int i  = 0 ;i<size;i++){
		cout<<endl<<a[i];
	}
}
int main(){
	
	int size;
	cout<<"enter total element count";
	cin>>size;
	
	int a[size] = {0};
	//scan array elements
	cout<"Enter elements of array";
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	merge_sort(a, 0, size-1);
	printArray(a,size);
	return 0;
	
}