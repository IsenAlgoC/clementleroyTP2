#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

	// partie 1

	int n1 = 100, i, somme2 = 0, somme3 = 0;
	unsigned short int n2 = 1, somme4 = 0,n,somme1=0;

	

	printf("donner la valeur de n\n");
	scanf_s("%hu", &n);

	while (n > 361) {

		printf("donner la valeur de n\n");
		scanf_s("%hu", &n);
	}



	for(i = 0; i <= n; i++) {
		somme1 = somme1 + i;
	} // cela revient a 0 et reconte

	printf("somme1 = %hu\n", somme1);

	while (n1 > 0) {
		somme2 = somme2 + n1;
			n1 = n1 - 1;
	}
	n1 = 100;
	do {
		somme3 = somme3 + n1;
			n1 = n1 - 1;
	} while (n1 > 0);

	printf("la somme des 100 premier terme est %hu, %d, %d\n", somme1,somme2,somme3);

	// partie 2
	
	

	while (somme4 < sizeof(n2)*(pow(2,16)/2)) {
		
		n2 = n2 + 1;
		somme4 = somme4 + n2;
	}

	printf("la valeur max de n est %hu et fait la somme %hu\n", n2, somme4);

	return(EXIT_SUCCESS);
}