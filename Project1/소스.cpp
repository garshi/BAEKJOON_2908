#include<stdio.h>



int T, S, F;									// �� �ڸ����� ���� �����
int A, B;										// �Է¹��� ���ڸ� �� 2��

int swap(int* result) {							// �� �ڸ��� ���ڸ� �ٲٱ� ���� �Լ�

	T = *result / 100;							// 100�� �ڸ���
	F = *result % 10;							// 1�� �ڸ���
	S = (*result / 10) % 10;					// 10�� �ڸ���

	*result = 100 * F + 10 * S + T;				// �� �ڸ��� ��ȯ
	return *result;								// result �� resturn
}

int main(void) {								

	scanf("%d %d", &A, &B);						// �� ���� �Է� �ޱ�

	int result;									// ����� ������ �� 
	swap(&A);									// A �ڸ��� �ٲٱ�
	swap(&B);									// B �ڸ��� �ٲٱ�

	if (A > B) result = A;						// A�� B �� ���� ū�� ���� �� result���� ����
	else result = B;

	printf("%d", result);						// ����� ���

}