#include<vector>
#include<cmath>
using namespace std;
vector<long long> primes;
template<class T>
bool isPrime(T &n){
  for(T i = 0;i<primes.size();++i){
    if(n%primes[i]==0)return false;
  }
  primes.push_back(n);
  return true;
}
template<class T>
vector<T> factorize(T &n){
  T final = sqrt(n);
  vector<T> factors;
  if(n%2==0){
    factors.push_back(2);
  }
  primes.push_back(2);
  for(T i = 3; i<=n;i+=2){
    if(isPrime(i)&&n%i==0) {
      factors.push_back(i);
    }
  }
  return factors;
}
