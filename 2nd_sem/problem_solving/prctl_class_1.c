#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}


int main() {

    // 1. sum two numbers
    int num1 = 20; int num2 = 10;
    int result = sum(num1, num2);
    printf("The sum of %d and %d is %d", num1, num2, result);
    // implicit typecasting is not possible in c. but happens in Java
    // 1. widening casting => small size data type => big size data type. eg. byte => int
    // 2. narrowing casting => big size data type => small size data type

    return 0;
}
