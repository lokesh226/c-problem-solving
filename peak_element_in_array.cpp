#include <iostream>
#include <vector>

using namespace std;



int main() {
    int x,count=0;
    cout<<"enetr the size of array";
    cin>>x;
    int arr[x];
    cout<<"enetr the elements of array ";
    for(int i=0;i<x;i++){
    	cin>>arr[i];
	}
	cout<<"peak elements are \n";
	for(int i=0;i<x;i++){
		if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
		cout<<arr[i]<<"\t";
	}
}
