#include <iostream>;
using namespace std;
main(){
	int a[10];
	int rot,n,x=0;
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
	int temp[10];
	for(int i=rot;i<n;i++){
		temp[x]=a[i];
		x++;
	}
	for(int i=0;i<rot;i++){
		temp[x]=a[i];
	}
	cout<<"rotated array";
	for(int i=0;i<n;i++){
		a[i]=temp[i];
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\n";
	}
}
