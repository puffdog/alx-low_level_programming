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
	char a;
	int b;
	long int c;
	long long int e;
	float f;

	printf("size of an char is: %lu bytes \n", (unsigned long)sizeof(a));
	printf("size of an int is: %lu bytes \n", (unsigned long)sizeof(b));
	printf("size of an long int is: %lu bytes \n", (unsigned long)sizeof(c));
	printf("size of an long long int is: %lu bytes\n", (unsigned long)sizeof(e));
	printf("size of an float is: %lu bytes\n", (unsigned long)sizeof(f));
	return (0);
}
