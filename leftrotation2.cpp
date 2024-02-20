#include<iostream>
using namespace std;

//to find the size of array
// size=sizeof(array)/sizeof(array[0]);
main(){
	int a[10];
	int rot,n,temp;
	cout<<"enter the no.of elements in array \n";
	cin>>n;
	cout<<"enter the no.of elements to be shifted \n";
	cin>>rot;
	cout<<"enter the elements in array";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"the array is";
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\n";
	}
	for(int i=1;i<=rot;i++){
		temp=a[0];
		for(int j=0;j<n;j++){
			a[j]=a[j+1];
		}
		a[n-1]=temp;
	}
	cout<<"shifted array is";
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\n";
	}
	
}
	
