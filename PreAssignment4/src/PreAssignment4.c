/*
 ============================================================================
 Name        : PreAssignment4.c
 Author      : Shivam Palaskar
 Version     :
 Copyright   : Open source
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// ------------ Q.1 ---------

/*int getFactorial(int);
int main(void) {
	int num;
	printf("Enter a Number : ");
	scanf("%d",&num);
	int fact = getFactorial(num);
	printf("\nFactorial of %d is %d",num,fact);
	return EXIT_SUCCESS;
}
int getFactorial(int num){
	int fact=1;
	do{
		fact*=num;
	}while(--num);
	return fact;
}*/

// ------------ Q.2 --------------

/*int getPower(int, int);
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int b, i;
	printf("Base : ");
	scanf("%d", &b);
	printf("Index : ");
	scanf("%d", &i);
	int ans = getPower(b, i);
	printf("%d ^ %d = %d", b, i, ans);
}
int getPower(int b, int i) {
	int ans = 1;
	while (i--) {
		ans *= b;
	}
	return ans;
}*/

// ------------ Q.5 ---------

/*void printChar(int,char);
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int i;
	char c;
	printf("Enter a charater : ");
	scanf("%c",&c);
	printf("\nEnter a Numer : ");
	scanf("%d",&i);
	printChar(i,c);
	return EXIT_SUCCESS;
}
void printChar(int i,char c){
	while(i--)
		printf("%c",c);
}*/

// ---------- Q.7 ------------

/*void printFibbo(int);
int main(void) {
	int i;
	printf("Enter a number : ");
	scanf("%d", &i);
	printFibbo(i);
}
void printFibbo(int i){
	int a = 1, b = 1;
	printf("\n%d,%d", a, b);
	for (; i > 2; i--) {
		printf(",%d", a + b);
		int temp = b;
		b = a + b;
		a = temp;
	}
}*/

// ----------- Q.8 -----------

/*int nextFibbo();
int i, a = 1, b = 1,loop;
int main(void) {
	printf("Enter a number : ");
	scanf("%d", &i);
	int i1=i;
	for(loop=0;loop<i1;loop++){
		printf("%d ",nextFibbo());
	}
}
int nextFibbo() {
	if (loop < 2)
		return 1;
	else {
		int nextTerm = a + b;
		int temp = b;
		b = a + b;
		a = temp;
		return nextTerm;
	}
}*/

// -------------- Q.9 ------------------

/*int checkPrime(int);
void primeInRange(int, int);
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int i, from, to;
	printf("Enter a Number : ");
	scanf("%d", &i);
	int isPrime = checkPrime(i);
	if (isPrime)
		printf("Prime");
	else
		printf("Not Prime\n");
	printf("Enter Range of Number \n");
	printf("From : ");
	scanf("%d", &from);
	printf("To : ");
	scanf("%d", &to);
	primeInRange(from, to);

}
int checkPrime(int i) {
	int limit, div = 2;
	if (i % 2) {
		limit = (i - 1) / 2;
	} else {
		limit = i / 2;
	}
	if (limit < 2) {
		return 1;
	}
	while (div <= limit) {
		if (!(i % div)) {
			return 0;
			break;
		} else if (div == limit) {
			return 1;
		}
		div++;
	}
}
void primeInRange(int from, int to) {
	int i = from, limit, div = 2;
	int getLength(int);
	printf("Prime No.s BW %d to %d : ", from, to);
	while (i <= to) {
		if (i % 2) {
			limit = (i - 1) / 2;
		} else {
			limit = i / 2;
		}
		if (limit < 2) {
			printf("%d ", i);
		}
		while (div <= limit) {
			if (!(i % div)) {
				break;
			} else if (div == limit) {
				printf("%d ", i);
			}
			div++;
		}
		i++;
		div = 2;
	}
}
int getLength(int b) {
	int len = 0;
	while (b % 10 != 0 || b != 0) {
		len++;
		b /= 10;
	}
	return len;
}*/

// ---------------- Q.10 ----------------

