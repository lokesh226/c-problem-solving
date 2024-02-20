#include<iostream>
using namespace std;
main(){
    int a[]={10,20,30,40,50,60,70};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<n<<"\n";
    int temp,x;
    cout<<"enter the no.of digits to be rotated";
    cin>>x;
    for(int i=1;i<=x;i++){
        temp=a[n-1];
        for(int j=n-1;j>=0;j--){
            a[j]=a[j-1];
        }
        a[0]=temp;
    }
     cout<<"the rotated array is";
   for(int i=0;i<n;i++){
    cout<<a[i]<<"\t";
   }
}
