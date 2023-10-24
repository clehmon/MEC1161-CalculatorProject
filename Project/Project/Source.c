#include "Calculator.h"

int main() {

	printf("\t scientific calculator!!\n\n");
	int choice;
	printf(" 1 : Addition \n");
	printf(" 2 : Subtraction \n");
	printf(" 3 : Multiplication \n");
	printf(" 4 : Division \n");
	printf(" 5 : Modulus\n");
	printf(" 6 : Power \n");
	printf(" 7 : Factorial \n");
	printf(" 8 : square \n");
	printf(" 9 : cube \n");
	printf(" 10 : squareroot\n");
	printf(" 11 : sin()\n");
	printf(" 12 : cos()\n");
	printf(" 13 : tan()\n");
	while (1) {
		printf("\n Choose operator: ");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:
			addition();
			break;
		case 2:
			subtraction();
			break;
		case 3:
			multiplication();
			break;
		case 4:
			division();
			break;
		case 5:
			modulus();
			break;
		case 6:
			power();
			break;
		case 7:
			factorial();
			break;
		case 8:
			square();
			break;
		case 9:
			cube();
			break;
		case 10:
			squareroot();
			break;
		case 11:
			SIN();
			break;
		case 12:
			COS();
			break;
		case 13:
			TAN();
			break;
		case 0:
			exit(0);
		default:
			printf("!! please enter valid operation");

		}
	}
	return 0;
}