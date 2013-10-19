/*
 * piRekursiv.c
 *
 *  Created on: 19.10.2013
 *      Author: peterzainzinger
 */

#include <stdio.h>

double Pi(int n) {

	if (n >= 0) {

		double fac = 0;
		if (n % 2 == 0) {

			fac = 1;

		} else {

			fac = -1;
		}

		return (4 * fac / (2 * n + 1)) + Pi(n - 1);
	}

	else {

		return 0.;

	}

}

int main() {

	int n = 0;

	printf("Geben Sie ein, wie viele Glieder Sie berechnen wollen\n");

	scanf("%d", &n);

	printf("Das Ergebniss: %f", Pi(n));

}

