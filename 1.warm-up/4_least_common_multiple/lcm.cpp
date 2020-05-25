#include <iostream>

int gcd(long  a,long  b)
{
  int   divisor = a >= b?a:b;
  int  dividend = a <= b ? a : b;

  while(divisor != 0)
  {
    int  r = dividend % divisor;
    dividend = divisor;
    divisor = r;
  }

  return dividend;

}


long long lcm_naive(long long  a, long long  b) {
  return (a*b)/gcd(a,b);
}

int main() {
  long long a, b;
  std::cin >> a >> b;
  std::cout << lcm_naive(a, b) << std::endl;
  return 0;
}
