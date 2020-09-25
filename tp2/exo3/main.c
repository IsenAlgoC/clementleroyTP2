#include<stdio.h>
#include<stdlib.h>

int main() {

	int anne, resultat;

	

	
	printf("donner une annee \n");
	scanf_s("%d", &anne);

	while (anne > 10000) {
		printf("donner une année \n");
		scanf_s("%d", &anne);
	}

	/*if (anne % 4 != 0 || anne % 100 == 0 && 400 != 0) {
		printf("l'anne n'est pas bisextil");
	}
	else {
		printf("l'anne est bisextiel")
	}*/ // 2éme methode

	if (anne % 4 != 0) {
		printf("l'annee n'est pas bisextile ");
	}
	else if (anne % 100 == 0 && anne % 400 != 0) {
		printf("l'anne n'est pas bisextile");
	}
	else {
		printf("l'anne est bisextile");
	}
	return(0);
}