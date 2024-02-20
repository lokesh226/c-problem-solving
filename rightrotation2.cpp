#include<iostream>
using namespace std;
main(){
    int a[]={10,20,30,40,50,60,70};
    int n=sizeof(a)/sizeof(a[0]);
    int temp[n];
    int x;
    cout<<"enter the no.of digits to be rotated";
    cin>>x;
    int k=0;
    for(int i=x;i<n;i++){
    	temp[i]=a[k];
    	k++;
	}
	int m=n;
	for(int i=0;i<x;i++){
		temp[i]=a[m-1];
		m--;
	}
	cout<<"the rotated array is";
   for(int i=0;i<n;i++){
    cout<<temp[i]<<"\t";
   }
}
