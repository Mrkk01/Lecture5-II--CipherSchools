#include<iostream>
using namespace std;
int main(){
	int arr[4];
	cout<<"Give 5 integers as input"<<endl;
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	cout<<"Given input: "<<endl;
	for(int i=0;i<5;i++){
		cout<<arr[i];
		if(i==4){
			cout<<""<<endl;
		}
	}
	cout<<"Reversed input: "<<endl;
	for(int i=4;i>-1;i--){
		cout<<arr[i];
	}
}

