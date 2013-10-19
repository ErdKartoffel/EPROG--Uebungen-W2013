/*
 * rundung.c
 *
 *  Created on: 19.10.2013
 *      Author: peterzainzinger
 */

#include <stdio.h>


int rundung(double input){

	int cast = (int) input;

	if(input-cast>=0.5){

		return cast+1;

	}
	else{

		return cast;
	}


}

int main(){


	double input=0;

	printf("Geben Sie eine reele Zahl ein\n");
	scanf("%lf",&input);

	printf("Die nŠchste natuerliche Zahl ist %d\n",rundung(input));



}


