#include <stdio.h>
#include "../main.h"


int main(void)
{
	int count;

	count = _printf("Hello\n");
	printf("Count: %d\n", count);
	return (0);
}