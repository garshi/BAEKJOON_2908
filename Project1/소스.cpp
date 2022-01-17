#include<stdio.h>



int T, S, F;									// 각 자리수의 숫자 저장용
int A, B;										// 입력받을 세자리 수 2개

int swap(int* result) {							// 각 자리수 숫자를 바꾸기 위한 함수

	T = *result / 100;							// 100의 자리수
	F = *result % 10;							// 1의 자리수
	S = (*result / 10) % 10;					// 10의 자리수

	*result = 100 * F + 10 * S + T;				// 각 자리수 변환
	return *result;								// result 값 resturn
}

int main(void) {								

	scanf("%d %d", &A, &B);						// 두 숫자 입력 받기

	int result;									// 결과값 저장할 수 
	swap(&A);									// A 자리수 바꾸기
	swap(&B);									// B 자리수 바꾸기

	if (A > B) result = A;						// A와 B 중 뭐가 큰지 판정 후 result값에 대입
	else result = B;

	printf("%d", result);						// 결과값 출력

}