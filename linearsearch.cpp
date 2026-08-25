#include <iostream>
using namespace std;

/*int main(){
	int size;
	cout<<"Enter element count:";
	cin>>size;
	int a[size];

	for (int i=0;i<size; i++){
		cin>>a[i];
	}
	int t;
	cout<<endl<<"Enter element to search: ";
	cin>>t;
	int i;
	//bool flag=  false;

	for(i=0;i<size;i++){
		if(a[i]==t){
		//flag = true;
		cout<<"Found on index"<<i;
		break;
		}
	}
	//if(!flag){
	if(i==size){
		cout<<endl<<"Target not found";
    }
}*/

int lsearch(int a[],int size, int t){
	int size;
	cout<<"Enter element count:";
	cin>>size;
	int a[size];

	for (int i=0;i<size; i++){
		cin>>a[i];
	}
	int t;
	cout<<endl<<"Enter element to search: ";
	cin>>t;
    int i;
	int rindex= lsearch(a,size,t);
	if(rindex==-1){
	cout<<endl<<"Target not found";
	}else{
	cout<<endl<<"Found at index "<<rindex;
	}

	for(i=0;i<size;i++){
		if(a[i]==t){
	}
}
return i;
}
