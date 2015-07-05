// Given 2 non negative integers m and n, find gcd(m, n)
// GCD of 2 integers m and n is defined as the greatest integer g such that g is a divisor of both m and n.

int Solution::gcd(int A, int B) {
    // Force A > B
    int temp;
    if(A < B){
        temp = A;
        A = B;
        B = temp;
    }

    // Euclid's Algorithm
    while(B != 0)
    {
        temp = A % B;
        A = B;
        B = temp;
    }

    return A;
}
