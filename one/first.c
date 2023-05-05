/*
 * first.c
 *
 *  Created on: 04-May-2023
 *      Author: shnmkhk
 */
#include <stdio.h>
#include "greet.h"
int main() {
	printf("Calling init from greet.sh\n");
    init();

	int a[5] = { 1, 2, 3, 4, 5 };
	for (int ix = 0; ix < 5; ix++) {
		printf("Element at a[%d] is: %d\n", ix, a[ix]);
	}
	printf("\n");
	int b[5] = { };
	for (int ix = 0; ix < 5; ix++) {
		printf("Element at b[%d] is: %d\n", ix, b[ix]);
	}
}
