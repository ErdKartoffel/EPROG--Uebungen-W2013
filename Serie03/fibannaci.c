/*
 * fibannaci.c
 *
 *  Created on: 19.10.2013
 *      Author: peterzainzinger
 */

#include <stdio.h>



int fibonacciRek(int n){

	int temp = 0;
	if(n==1){

		return 1;
	}

	else if(n==0){

		return 0;
	}

	else{
		return  fibonacciRek(n-1)+fibonacciRek(n-2);

	}



}


int fibonacci(int n){


	int first = 0;
	int second = 1;

	int temp = 0;


	if(n==0){


		return 0;
	}


	while(temp<n-1){


		int tmp = second;


		second = second+first;
		first = tmp;


		++temp;


	}

	return second;

}


int main(){


	int n = 0;

	printf("Geben Sie n ein\n");


	scanf("%d",&n);


	printf("Nicht Rekursiv Glied: %d\n",fibonacci(n));


	printf("Rekursiv :%d\n",fibonacciRek(n));


return 0;

}
