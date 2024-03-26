//there are three steps to find prime factor of a number
//1)while n is divisible by 2, print 2 and divide n by 2
//2)after step 1 n must be odd now start the loop from i=3 to the sqrt(n). while i divides n print i and divide n by i.after 
// i fails to divide n increment i by 2 and continue
//3)if n is a prime number and greater that 2 then n will not become 1 by the above 2 steps so print n if it is >2
//
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int num,n=0;
	int fact[100];
	cout<<"enter the number"<<endl;
	cin>>num;
	for(int i=1;i<=sqrt(num);i++){
		if(num%i==0){
			fact[n]=i;
			n++;
			if(num/i==i)
			break;
			else{
			fact[n]=(num/i);
			n++;}
		}
	}
	for(int i=0;i<n;i++){
		cout<<fact[i]<<"\t";
	}
	cout<<endl;
	 while (num % 2 == 0) 
    { 
        cout << 2 << " "; 
        num = num/2; 
    } 
    for (int i = 3; i <= sqrt(num); i = i + 2) 
    {   
        while (num % i == 0) 
        { 
            cout << i << " "; 
            num = num/i; 
        } 
    }  
    if (num > 2) 
    cout << num << " "; 
}
