#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

long long karatsuba(long long x, long long y) {
    if (x < 10 || y < 10) {
        return x * y;
    }

    long long n = max(to_string(x).length(), to_string(y).length());
    long long m = n / 2;

    long long power = 1;

    for (int i = 0; i < m; i++) {
        power = power * 10;
    }

    long long a = x / power;
    long long b = x % power;

    long long c = y / power;
    long long d = y % power;

    long long ac = karatsuba(a, c);
    long long bd = karatsuba(b, d);
    long long ab_cd = karatsuba(a + b, c + d);

    return (ac * power * power)
           + ((ab_cd - bd - ac) * power)
           + bd;
}  

int main() {
    long long x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Multiplication = " << karatsuba(x, y);

    return 0;
}