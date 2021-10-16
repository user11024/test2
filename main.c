#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int n = rand() % 100;
	for (int i = 0; i < n; i++)
	{
		printf("%5d", rand() % 100);
	}

	return 0;
}
