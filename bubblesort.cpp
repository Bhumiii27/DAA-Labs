//bubble sort
#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter size of array";
	cin>>size;
	int a[size] = {0};
	cout<<"Enter array elements one by one:";
	for(int i =0;i<size;i++){
		cin>>a[i];
	}
    for(int j=0;j<size-1;j++){  //j<size-1 because we need to compare adjacent elements
        bool isSwap=false;  //to check if any swap is done in the current iteration
        for(int k=0; k<size-1-j; k++){
        if(a[k]>a[k+1]) {
            isSwap=true; //if swap is done, set isSwap to true
            int temp = a[k];
			a[k] = a[k+1];
			a[k+1] = temp;
        }

    }
    if(!isSwap) break;  //if no swap is done, then the array is already sorted
}
    cout << endl << "Array" << endl;
    for (int i = 0; i < size; i++){
        cout << a[i] << endl;
    }
    return 0;
}