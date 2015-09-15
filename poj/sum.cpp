#include <iostream>
using namespace std;

long gcd(long m, long n){
  if ( m % n == 0){
    return n;
  } else {
    return gcd(n, m % n);
  }
}

int main(){
  long n;
  long denominator = 1, numerator = 0;
  cin >> n;

  for(long i = 0; i < n; i++){
    long x, y;
    char slash;
    cin >> x >> slash >> y;
    numerator = denominator * x + numerator * y;
    denominator = denominator * y;
    long greatestCommonDivisor = gcd(denominator, numerator);
    numerator =  numerator/greatestCommonDivisor;
    denominator =  denominator/greatestCommonDivisor;
  }
  if (numerator % denominator == 0){
    cout << numerator / denominator;
  }else {
    cout << numerator << "/" << denominator;
  }

  return 0;
}
