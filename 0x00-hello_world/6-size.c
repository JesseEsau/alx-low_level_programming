#include <stdio.h>
/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;



printf("Size of char:%d byte(s)\n", sizeof(a));
	printf("Size of int:%d byte(s)\n", sizeof(b));
	printf("Size of a long int:%d byte(s)\n", sizeof(c));
	printf("Size of long long int:%d byte(s)\n", sizeof(d));
	printf("Size of a float:%d byte(s)\n", sizeof(f));
	return (0);
}
