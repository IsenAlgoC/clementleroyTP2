#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main() {

	printf("jeu nombre aleatoire\n");
	int i = rand(), nombre=0, n=0;

	while (nombre != i) {
		printf("donner un nombre \n");
		scanf_s("%d", &nombre);

		if (nombre > i) {
			printf("Trop Grand\n");
			n = n + 1;
		}
		else if (nombre < i) {
			printf("Trop petit\n");
			n = n + 1;
		}
		else {
			printf("vous avez trouver le nombre %d en %d tentative", nombre, n);
		}
	}

	return(0);
}
