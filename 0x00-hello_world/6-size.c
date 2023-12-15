#include <stdio.h>
/**
 * main - Entry level
 *
 * Description: print the size of
 *
 * Return: return 0 if success
 */
int main(void)
{
	int a;
	char b;
	float c;
	double d;
	long long int e;
	long int f;

	printf("size of an int is: %lu byte \n", (unsigned long)sizeof(a));
	printf("size of an char is: %lu byte \n", (unsigned long)sizeof(b));
	printf("size of an float is: %lu byte \n", (unsigned long)sizeof(c));
	printf("size of an double is: %lu byte \n", (unsigned long)sizeof(d));
	printf("size of an long long int is: %lu byte \n", (unsigned long)sizeof(e));
	printf("size of an long int is: %lu byte \n", (unsigned long)sizeof(f));
	return (0);
}
