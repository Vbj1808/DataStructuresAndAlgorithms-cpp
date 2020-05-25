#include <iostream>

int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;
    int f;
    for(int i=2;i<=n;i++){
        f = (previous + current)%10;
        previous = current%10;
        current = f%10;
    }

    return f;
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_naive(n);
    std::cout << c << '\n';
    }
