#include <stdio.h>
#include "../main.h"


int main(void)
{
	int count;

	count = _printf("Hello %c main\n", 'A');
	printf("Count: %d\n", count);
	return (0);
}
