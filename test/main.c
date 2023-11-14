#include <stdio.h>
#include "../main.h"


int main(void)
{
	int count;

	count = _printf("Hello %s\n", "Beulah");
	printf("Count: %d\n", count);
	return (0);
}
