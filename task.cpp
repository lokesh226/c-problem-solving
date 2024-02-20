// write a program to find distinct element common to all rows of the matrix
#include<iostream>
using namespace std;
main(){
	int c,d;
	
cout<<"enter the no.of rows";
cin>>c;
cout<<"enter the no.of columns";
cin>>d;
int a[c][d];
cout<<"enter 1st matrix";
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            cin>>a[i][j];
        }
   }
   int row=0,col=0;
   while(col<=d){
   int flag=0;
   for(int i=1;i<c;i++){
   	
   	for(int j=0;j<d;j++){
   		if(a[row][col]==a[i][j])
   		flag++;
	   }
	}
	if(flag==c-1){
	   	cout<<a[row][col]<<"\t";}
	   	col++;
   } 
}

