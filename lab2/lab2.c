#include <stdio.h>
long int factorial (int num) {
	long int total = 1;
	for (int i = num; num >= 1; num--) 
		total = num * total;  
	return total; 
}

int main() {
	for (int i = 1; i <= 20; i++) {
		printf("%d\t factorial= %ld\n", i, factorial(i));
	}
	return 0;
}
