#include "sum.h"
#include <stdio.h>

int main(void)
{
	int a;
	int b;

	printf("���� �ΰ��� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &a, &b);
	int result = sum(a, b);
	printf("%d���� %d������ ������ %d�Դϴ�", a, b, result);
	return 0;

}
