//Q2)-> a k rough or k jagged number is a number whose smallest prime factor is greater than or equal to the number k wherw k is given br=y user
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
   for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) {
         return false;
      }
   }
   return true;
}
vector<int> getPrimes(int n) {
   vector<int> primes;
   for (int i = 2; i < n; i++) {
      if (n % i == 0 && isPrime(i)) {
         primes.push_back(i);
      }
   }
   return primes;
}
bool isRoughNumber(int n, int k) {
   vector<int> primes = getPrimes(n);
   return primes[0] >= k;
}
int main() {
   int n = 75, k = 4;
   if (isRoughNumber(n, k)) {
      cout << n << " is a " << k << " rough number" << endl;
   }else {
      cout << n << " is not a " << k << " rough number" << endl;
   }
   return 0;
}
