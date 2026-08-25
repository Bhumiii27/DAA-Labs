#include <iostream>
using namespace std;
Pair<int,int> minmax(int a[], int size){
	int max=a[0];
	int min=a[0];
	
	for(int i=1;i<size;i++){
		if(max<a[i]) max=a[i];
		if(min>a[i]) min=a[i];
	}
	return {min,max};
	}

int main (){
	int size;
	cout<<"Enter element count:";
	cin>>size;
	int a[size];

	cout<<"Max "<<max<<"Min "<<min;
	return 0;
	}