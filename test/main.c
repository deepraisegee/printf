#include <stdio.h>
#include "../main.h"


int main(void)
{
	int count;

	count = _printf("%d", -1024);
	printf("Count: %d\n", count);
	return (0);
}
