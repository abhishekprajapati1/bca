#include<stdio.h>

int factorial_iterative(int n){
    int i = 1;
	int fact = 1;

	while(i<=n){
		fact = fact * i;
		i++;
	}

	return fact;
}

int factorial_recursive(int n){

    printf("getting the number %n", n);
    return n;
}

int main(){

	int n = 5;

	// int factorial_with_iterative_method = factorial_iterative(n);
	// printf("The factorial of %d with iterative method is %d \n", n, factorial_with_iterative_method);

	int factorial_with_recursive_method = factorial_recursive(n);
	printf("The factorial of %d with recursive method is %d", n, factorial_with_recursive_method);

	return 0;
}
