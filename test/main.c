#include <stdio.h>
#include "../main.h"


int main(void)
{
	int count;

	count = _printf("%d\n", -342);
	printf("Count: %d\n", count);
	return (0);
}
