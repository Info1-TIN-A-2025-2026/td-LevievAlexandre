#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	unsigned char num_students = 23;
	unsigned char num_chairs = 32;
	short delta = 0;
	delta = num_students - num_chairs;

	bool sw1 = true;
	bool sw2 = true;

	unsigned char state = (sw2 << 4) + sw1;

//	printf("Hello = %d", num_students);
	printf("Hello = %u, Number of chairs = %u", num_students, num_chairs);
	printf("delta = %hd, delta");
	printf("sw1 = %d, sw1");

	printf("state=%X (base 16)\n, state");

	char a = 'A'; //ASCII code of 'A'=65

	printf("a=%d\n, a");
	printf("a=%c\n, a");

	char b = 112;
	printf("b=%c/n", b);
	return 0;
}