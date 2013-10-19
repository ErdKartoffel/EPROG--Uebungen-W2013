/*
 * vektorprodukt.c
 *
 *  Created on: 19.10.2013
 *      Author: peterzainzinger
 */

#include <stdio.h>

int main() {

	double u[3];
	double v[3];

	printf("Geben Sie den Vektor u ein \n");

	int j;
	for (j = 0; j < 3; ++j) {

		scanf("%lf",&u[j]);

	}

	printf("Geben Sie den Vektor v ein \n");

	for (j = 0; j < 3; ++j) {

			scanf("%lf",&v[j]);

		}


	double o1,o2,o3;

	o1 = u[1]*v[2]-u[2]*v[1];
	o2 = u[2]*v[0]-u[0]*v[2];
	o3 = u[0]*v[1]-u[1]*v[0];

	double  output [3]= {o1,o2,o3};

	for (j = 0; j < 3; ++j) {



		printf("%f\n",output[j]);

	}


}

