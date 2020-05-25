#include <iostream>

int gcd_naive(int a, int b) {
  int divisor = a >=b ? a : b;
  int dividend = a <= b ? a : b;
  while(divisor != 0)
  {
    int r = dividend % divisor;
    dividend = divisor;
    divisor = r;
  }
  return dividend;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd_naive(a, b) << std::endl;
  return 0;
}
