#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char s[100], * p, * q, num, count = 0;
	scanf("%s", s);
	num = strlen(s);
	p = s;
	q = s + strlen(s) - 1;
	for (int i = 0; i < num / 2; i++) {
		if (*p == *q) {
			p++;
			q--;
			count++;
		}
	}
	if (count == strlen(s) / 2) {
		printf("Palindrome");
	}
	else {
		printf("Not Palindrome");
	}
	return 0;
}