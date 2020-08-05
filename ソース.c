#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int r;
	int ch = 0;
	int ct = 0;
	srand((unsigned int)time(NULL));
	printf("Tossing a coin...\n");
	for (int i = 0;i < 3;i++) {
		r = rand() % 2;
			if (r == 0) {
				printf("Rond %d: Heads\n", i + 1);
				ch++;
			}
			else if (r == 1) {
				printf("Rond %d: Tails\n", i + 1);
				ct++;
			}
			else printf("Rond %d: Error\n", i + 1);
	}
	printf("Heads: %d, Tails: %d\n",ch,ct);
	return 0;
}