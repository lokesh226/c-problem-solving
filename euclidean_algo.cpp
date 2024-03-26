// this algo is based on 2 facts 
//1) if we subtract smaller number from a lagrer one, GCD dose not change which means if we keep subtracting repetedly 
// the larger of two we end up with GCD
//2) now if insted of subtraction if we devide the smaller number the algo stops when we find the reminder 0
#include<iostream>
#include<cmath>
using namespace std;
int gcd(int a, int b){
	if(a==0)
	return b;
	else
	gcd(b%a,a);
}
int main(){
	int num1=10,num2=15;
	int result=gcd(num1,num2);
	cout<<result;
}
