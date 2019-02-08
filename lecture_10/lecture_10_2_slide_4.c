#include <stdio.h>
#include <string.h>
#define MAX_LINE 81

int main()
{
	char s[] = "Hello", t[6];
	char *p = "world", *q;

	printf("string s = %s\n", s);
	strcpy(t,s);
	printf("string t = %s\n", t);

	printf("string p = %s\n", p);
	q = p;
	printf("string q = %s\n", q);

	strcpy(s, "Good");
	printf("string s = %s\n", s);
	printf("string t = %s\n", t);

	strcpy(p, "Bye");
	printf("string p = %s\n", p);
	printf("string q = %s\n", q);

	return 0;
}
