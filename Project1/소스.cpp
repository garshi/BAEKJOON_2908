#include<stdio.h>




int main(void) {



	int A, B;
	scanf("%d %d", &A, &B);

	int result;


	if (A > B) result = A;
	else result = B;


	int T, S, F;

	T = result / 100;
	F = result % 10;
	S = (result / 10) % 10;


	result = 100 * F + 10 * S + T;
	printf("%d", result);

}