#include <stdio.h>

long long fib(int n) {
    if(n==0) {
        return 0;
    }
    if(n==1) {
        return 1;
    }

    return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    long long a, b, c;

    n = 41;
    printf("Recursivo");
    printf("%lld", fib(n));
    
    printf("Recursivo");
    a = 0;
    b = 1;

    for(int i=1; i<n; i++) {
        c = a + b;        
        a = b;
        b = c;
    }
    printf("\n%lld ", c);
}