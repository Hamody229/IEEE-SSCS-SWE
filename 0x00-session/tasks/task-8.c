#include <stdio.h>

void isEven(int n) {
	if (n % 2 == 0) {
		printf("%d is even\n", n);
	} else {
		printf("%d is odd\n", n);
	}
}

void calculateArea(float n) {
	if (n  == 0) {
		printf("no radius specified\n");
	} else {
		printf("the radius exists\n");
	}
}

int main() {
    int n ;
    scanf("%d",&n);
    isEven(n);
    calculateArea(n) ;
}