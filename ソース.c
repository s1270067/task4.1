#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int r;
	int ch = 0;
	int ct = 0;
	srand((unsigned int)time(NULL));
<<<<<<< HEAD
	//char name[15];

	/*printf("Who are you?\n");
	printf(">");
	scanf_s("%s", name,15);
	printf("Hello, %s!\n", name);*/
=======
	char name[15];

	printf("Who are you?\n");
	printf(">");
	scanf_s("%s", name,15);
	printf("Hello, %s!\n", name);
>>>>>>> user-name

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
<<<<<<< HEAD
	/*if (ch > ct) {
		printf("You won\n");
	}
	else if (ch < ct) {
		printf("You lost\n");
	}
	else printf("Error\n");*/
=======
	if (ch > ct) {
		printf("%s won\n",name);
	}
	else if (ch < ct) {
		printf("%s lost\n",name);
	}
	else printf("Error\n");
>>>>>>> user-name
	return 0;
}
