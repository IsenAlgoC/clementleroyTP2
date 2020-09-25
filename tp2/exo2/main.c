#include<stdio.h>
#include<stdlib.h>


void tri(double *A, double *B, double *C) {

	double temp;

	if (*A < *B){
		temp = *A;
		*A = *B;
		*B = temp;
	}
	if (*A < * C) {
		temp = *A;
		*A = *C;
		*C = temp;
	}
	if (*C > *B) {
		temp = *C;
		*C = *B;
		*B = temp;
	}
}


int main() {
	


	double A, B, C;
	int i = 1;

	while (i == 1) {

		printf("donner les 3 dimension de votre A, B, C\n");
		scanf_s("%lf", &A);
		scanf_s("%lf", &B);
		scanf_s("%lf", &C);



		while ((A <= 0) || (A > 150) || (B <= 0) || (B > 150) || (C <= 0) || (C > 150)) {

			printf("donner les 3 dimension de votre A, B, C\n");
			scanf_s("%lf", &A);
			scanf_s("%lf", &B);
			scanf_s("%lf", &C);
		}

		tri(&A, &B, &C);


		if (A > 55) {
			printf("NON VALIDE");
		}
		else if (B > 35) {
			printf("NON VALIDE");
		}
		else if (C > 25) {
			printf("NON VALIDE");
		}
		else {
			printf("VALIDE");
		}

		printf("si vous voulez recommencer taper 1 sinon 0\n");
		scanf_s("%d", &i);

	}
		return(0);
}