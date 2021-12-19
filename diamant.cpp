#include <stdio.h>

int main(void) {

	int mezera = 9;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < mezera; j++) {
			printf(" ");

		}

		for (int k = i; k >= 1; k--) {
			printf("%d", k);
		}

		for (int k = 2; k <= i; k++) {
			printf("%d", k);
		}

		printf("\n");
		mezera--;

	}

	mezera = 0;

	for (int i = 9; i > 0; i--) {
		for (int j = 0; j < mezera; j++) {
			printf(" ");

		}
		for (int k = i; k >= 1; k--) {
			printf("%d", k);
		}
		for (int k = 2; k <= i; k++) {
			printf("%d", k);
		}

		printf("\n");
		mezera++;
	}

}
