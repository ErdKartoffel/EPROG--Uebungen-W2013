/*
 * wurzel.c
 *
 *  Created on: 19.10.2013
 *      Author: peterzainzinger
 */

#include <stdio.h>
#include <math.h>


double first=0;
double second = 0;

double _sqrt(double x, int t){


	first = (double)(1+x)/2.0;

	while(1){







		second =  (first+x/first)/2.0; /*Damit ist am Ende der Schleife first==second*/

		if((fabs(first-second)/fabs(first))<=t || first<=t){

			return first;

		}

		first = second; /*du brauchst eine zusaetzliche variable, als Zwischenspeicher*/



	}

}

int main(){

	double x;
	double t;

	printf("Geben Sie x ein\n");
	scanf("%lf",&x);
	printf("Geben Sie t ein\n");
	scanf("%lf",&t);

	double output = _sqrt(x,t);

	printf("Approx %f\n",output);
	printf("Genau %f\n",sqrt(x));

	printf("Fehler: %f",fabs(output-sqrt(x)));



}


