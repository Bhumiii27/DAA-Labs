#include <iostream>
using namespace std;
int main (){
	int size;
	cout<<"Enter element count:";
	cin>>size;
	int a[size];

	for (int i=0;i<size; i++){
		cin>>a[i];
	}
	int max = a[0];
	int min = a[0];
	
	for(int i=1;i<size; i++){
		if(max<a[i]) max=a[i];
		if(min>a[i]) min=a[i];
	}
	cout<<"Max "<<max<<" Min "<<min;
	return 0;
	}