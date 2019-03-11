#include "sum.h"
#include <stdio.h>

int main(void)
{
	int a;
	int b;

	printf("정수 두개를 입력하시오: ");
	scanf_s("%d %d", &a, &b);
	int result = sum(a, b);
	printf("%d에서 %d까지의 총합은 %d입니다", a, b, result);
	return 0;

}
