/*
 * test.c
 *
 *  Created on: 19.10.2013
 *      Author: peterzainzinger
 */

#include <stdio.h>

int n;
int k;

int binomial(int a, int b) {
	int temp1, temp2;
	if ((a == 0) || (a == b)) {
		return 1;
	} else {
		temp1 = binomial(a - 1, b);
		temp2 = binomial(a - 1, b - 1);
		return temp1 + temp2;
	}
}

int main() {

	printf("Geben sie n ein\n");
	scanf("%d", &n);

	printf("Geben sie k ein\n");
	scanf("%d", &k);

	printf("Ergebniss %d", binomial(n, k));
	return 0;
}
