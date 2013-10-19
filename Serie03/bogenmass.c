/*
 * bogenmass.c
 *
 *  Created on: 19.10.2013
 *      Author: peterzainzinger
 */

#include <stdio.h>
#include <math.h>


double bogenmass(double winkel) {

	double rad = 0;

	/*
	 *
	 *    M_PI is a double constant for PI also in M_PI

	 */

	while (1) {

		if (winkel > 360) {

			winkel -= 360;

		} else {

			break;
		}

	}

	rad = winkel / 360 * 2 * M_PI;

	return rad;

}
int main() {

	double input = 0;
	double output = 0;
	printf("Geben Sie den Winkel ein\n");

	scanf("%lf", &input);

	output = bogenmass(input);

	printf("Der Winkel im Bogenma§: %f\n", output);

	return 0;
}

