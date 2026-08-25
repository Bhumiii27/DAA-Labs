#include<iostream>
using namespace std;
void swap(int a[], int i, int j){
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}
int partition(int a[], int start, int end){
	int i = start;
	int pivot = a[end];
	int j = end-1;
	while(true){
		while(a[i]<pivot) i++;
		while(a[j]>pivot) j--;
		if(i<j){
			swap(a,i,j);
			i++;
			j--;
		}
		else break;
	}
	swap(a, j, end);
	return j;
}
void quicksort(int a[], int start, int end){

	if(start<end){
		int pindex = partition(a, start, end);
		cout<<endl<<pindex<<" "<<start<<" "<<end<<endl;
		//left
		quicksort(a, start, pindex-1);
		//right
		quicksort(a, pindex+1,end);
	}
}
void printArray(int a[], int size){
	for(int i =0;i<size;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int size ;
	cout<<"Enter size: ";
	cin >>size;
	
	int a[size];
	cout<<"Enter elements:"<<endl;
	for(int i =0;i<size;i++){
		cin>>a[i];
	}
	printArray(a,size);
	quicksort(a, 0, size-1);
	printArray(a,size);
return 0;
}