// p smooth number is an integer whose lagrest prime factor is lessthan or equal to p
// following are the steps to find the prime factors
// 1. while n is divisible by 2, print 2

#include <iostream>
#include<math.h>
using namespace std;
bool check(int n, int p) 
{
	int maximum = -1;
	while (!(n % 2)) 
	{
		maximum = max(maximum, 2);
		n = n/2;
	}
	for (int i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0) 
		{ 
			maximum = max(maximum,i); 
			n = n / i;
		}
	}
	if (n > 2)
		maximum = max(maximum, n);
	return (maximum <= p);
}


int main() 
{
	int n = 22, p = 7;
	
	if (check(n, p))
		cout << "yes";
	else
		cout << "no";
	
	return 0;
}

