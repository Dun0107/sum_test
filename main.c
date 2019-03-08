#include <stdio.h>

int main()

{
        int a;
        int b;
        int value;

        printf("정수 두개를 입력하시오: ");
        scanf("%d %d", &a, &b);

        value = (a + b)*(abs(a - b) + 1) / 2;

        printf("%d에서 %d까지의 총합은 %d입니다", a, b, value);

}
