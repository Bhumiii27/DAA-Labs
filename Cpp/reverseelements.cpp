#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter the number of elements: ";  
    cin >> size;
    int arr[size];
    cout << "Enter the elements: ";
    for(int i = 0, j=size-1; i!=j; i++, j--){
        cin >> arr[i];
    }
    for(int i=0;i<size/2;i++){
        swap(arr[i], arr[size-i-1]);
    }
    cout << "Reversed array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}