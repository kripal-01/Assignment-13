// 10. Write a program in C to calculate the power of any number using recursion.

#include <stdio.h>
// use function  recursion or loopinstead of math.h
int power(int n1, int n2);
int main() {
    int base, a, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d^%d = %d", base, a, result);
    return 0;
}

int power(int base, int a) {
    if (a == 1)
     return base;
        return (base * power(base, a - 1));
    
       
}

