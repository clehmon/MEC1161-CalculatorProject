#include "Calculator.h"

void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();
void SIN();
void COS();
void TAN();

void addition() {
	printf("Enter the numbers you want to add: ");
	int a, b;
	scanf_s("%d%d", &a, &b);
	printf(" sum = %d\n", a + b);
}
void subtraction() {
	printf("Enter the numbers you want to subtract: ");
	int a, b;
	scanf_s("%d%d", &a, &b);
	printf(" subtraction= %d\n", a - b);
}
void multiplication() {
	printf("Enter the numbers you want to multiply: ");
	int a, b;
	scanf_s("%d%d", &a, &b);
	printf(" multiplication = %d\n", a * b);

}
void division() {
	printf("Enter the numbers you want to divide: ");
	int a, b;
	scanf_s("%d%d", &a, &b);
	printf(" division %f\n", (float)a / (float)b);
}
void modulus() {
	printf("Enter the numbers you want to find modulus of: ");
	int a, b;
	scanf_s("%d%d", &a, &b);
	printf("The modulus of a and b is %d\n", a % b);
}
void factorial() {
	int n, factorial;
	printf("Enter the number you want the factorial of: ");
	scanf_s("%d", &n);
	factorial = 1;
	for (int i = 1; i <= n; i++) {
		factorial = factorial * i;
	}

	printf("\nFactorial of %d is %d", n, factorial);
}
void power() {
	double b;
	double p;
	printf("Enter the base and the power: ");
	scanf_s("%lf%lf", &b, &p);
	double e = pow(b, p);
	printf("The power is %lf", e);
}
void square() {
	double b;
	printf("Enter the number you want the square of: ");
	scanf_s("%lf", &b);
	double p = pow(b, 2);
	printf("The square of %lf is %lf", b, p);
}
void cube() {
	double b;
	printf("Enter the number you want the cube of: ");
	scanf_s("%lf", &b);

	double p = pow(b, 3);
	printf("The cube of %lf is %lf", b, p);
}
void squareroot() {
	double b;
	printf("Enter the number you want the square root of : ");
	scanf_s("%lf", &b);
	double s = sqrt(b);
	printf("The square root of %lf is %lf", b, s);
}
void SIN() {
	double b;
	printf("enter the value:");
	scanf_s("%lf", &b);
	double si = sin(b);
	printf("sin(%lf)=%.2lf", b, si);
}
void COS() {
	double b;
	printf("enter the value:");
	scanf_s("%lf", &b);

	double co = cos(b);
	printf("cos(%lf)=%.2lf", b, co);
}
void TAN() {
	double b;
	printf("enter the value:");
	scanf_s("%lf", &b);
	double ta = tan(b);
	printf("tan(%lf)=%.2lf", b, ta);
}