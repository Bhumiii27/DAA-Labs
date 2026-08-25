#include<iostream>
using namespace std;
int main(){
    int size1;
    cout<<"Enter the size of the array 1: ";
    cin>>size1;
    int arr1[size1]={0};
    cout<<"Enter the elements of the first array: ";
    for(int i=0; i<size1; i++){
        cin>>arr1[i];
    }
    int size2;
    cout<<"Enter the size of the array 2: ";
    cin>>size2;
    int arr2[size2]={0};
    cout<<"Enter the elements of the second array: ";
    for(int i=0; i<size2; i++){
        cin>>arr2[i];
    }
    


    return 0;
}