#include <stdio.h>

int main(void)
{

	float num1, num2, num3;

	printf("���� �µ� �Է� : ");
	scanf_s("%f", &num1);
	printf("ȭ�� �µ� : %.4f\n", (9.0 / 5.0) * num1 + 32.0);

	printf("\n");

	printf("���� �µ� �Է� : ");
	scanf_s("%f", &num2);
	printf("ȭ�� �µ� : %.4f\n", (9.0 / 5.0) * num2 + 32.0);

	printf("\n");

	printf("���� �µ� �Է� : ");
	scanf_s("%f", &num3);
	printf("ȭ�� �µ� : %.4f\n", (9.0 / 5.0) * num3 + 32.0);

	return 0;
}