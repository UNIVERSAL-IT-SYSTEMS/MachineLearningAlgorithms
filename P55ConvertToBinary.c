/*Owner & Copyrights: Vance King Saxbe. A.*/// Program P5.5

#include <stdio.h>

typedef struct {
	int bit;
} StackData;

#include <stack.h>

int main() {
	StackData temp;
	int n;
	Stack S = initStack();
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	while (n > 0) {
		temp.bit = n % 2;
		push(S, temp);
		n = n / 2;
	}
	printf("\nIts binary equivalent is ");
	while (!empty(S))
		printf("%d", pop(S).bit);
	printf("\n");
} //end main
/*email to provide support at vancekingsaxbe@powerdominionenterprise.com, businessaffairs@powerdominionenterprise.com, For donations please write to fundraising@powerdominionenterprise.com*/