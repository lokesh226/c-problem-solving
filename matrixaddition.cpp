#include<iostream>
using namespace std;
main(){
    int a[3][3],b[3][3],sum[3][3];
    cout<<"enter 1st matrix";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter 2nd matrix";
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>b[i][j];
        }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"sum matrix is \n";
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<sum[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
