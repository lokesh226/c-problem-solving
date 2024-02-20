#include<iostream>
using namespace std;
void spiral(int a[row][col],int m, int n){
	int rowstart=0,rowend=m-1;
	int colstart=0,colend=n-1;
	while(rowstart<=rowend && colstart<=colend){
		for(int i=colstart;i<=colend;i++){
			cout<<a[rowstart][i]<<"\n";
		}
		rowstart++;
		for(int i=rowstart;i<=rowend;i++){
			cout<<a[i][colend]<<"\n";
		}
		colend--;
		if(rowstart<=rowend){
			
		}
	}
}
