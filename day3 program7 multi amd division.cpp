#include <bits/stdc++.h>
using namespace std;

// These functions will perform the all arithmetic operations
inline void Sum(int p, int q) {
    int sum = p + q;
    cout << "SUM        " << p << " + " << q << " = " << sum << "\n";
}

inline void Difference(int p, int q) {
    int sub = p - q;
    cout << "DIFFERENCE " << p << " - " << q << " = " << sub << "\n";
}

inline void Multiplication(int p, int q) {
    int mul = p * q;
    cout << "PRODUCT    " << p << " * " << q << " = " << mul << "\n";
}

inline void Division(int p, int q) {
    float div = (float)p / q;
    cout << "QUOTIENT   " << p << " / " << q << " = " << div << "\n";
}

inline void Modulus(int p, int q) {
    int mod = p % q;
    cout << "MODULUS    " << p << " % " << q << " = " << mod << "\n";
}

// It's the driver function
int main() {
    int p, q;
    
    cout << "Enter any two numbers:\n";
    cin >> p >> q;

    // It will perform the all arithmetic operations
    cout << endl;
    Sum(p, q);
    Difference(p, q);
    Multiplication(p, q);
    Division(p, q);
    Modulus(p, q);
    return 0;
}
