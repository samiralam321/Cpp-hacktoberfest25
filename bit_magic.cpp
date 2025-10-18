#include <bits/stdc++.h>
using namespace std;

int main() {

    // 1. Check if a number is a power of 2
    int x = 16;
    if (x && !(x & (x - 1))) // only one bit is set
        cout << x << " is a power of 2\n";

    // 2. Swap two numbers without a temp variable
    int a = 5, b = 9;
    a ^= b;
    b ^= a;
    a ^= b;
    cout << "Swapped: " << a << " " << b << "\n";

    // 3. Count set bits (Brian Kernighan’s method)
    int n = 29, count = 0;
    while (n) {
        n &= (n - 1); // removes the rightmost set bit
        count++;
    }
    cout << "Set bits count: " << count << "\n";

    // 4. Get the rightmost set bit
    n = 12; // 1100
    int rightmost = n & -n; // isolates the lowest 1 bit
    cout << "Rightmost set bit: " << rightmost << "\n";

    // 5. Turn off the rightmost set bit
    n = 14; // 1110
    n = n & (n - 1); // removes the lowest 1 bit
    cout << "After turning off rightmost bit: " << n << "\n";

    // 6. Check if ith bit is set
    n = 37; // 100101
    int i = 3;
    if (n & (1 << i)) 
        cout << "Bit " << i << " is ON\n";
    else 
        cout << "Bit " << i << " is OFF\n";

    // 7. Set and toggle ith bit
    n = 37;
    i = 1;
    n |= (1 << i); // set ith bit ON
    cout << "After setting bit " << i << ": " << n << "\n";
    n ^= (1 << i); // toggle ith bit
    cout << "After toggling bit " << i << ": " << n << "\n";

    return 0;
}
