#include <stdio.h>

int main(int argc, char const *argv[])
{
	int T, N, x, y;
	scanf("%d", &T);
	for(int t = 0; t < T; t++)
	{
		scanf("%d %d %d", &N, &x, &y);
		for(int i = 2; i < N; i++)
		{
			if(i % x == 0 && i % y != 0)
			{
				printf("&d", i);
			}
		}
	printf("\n");
	}
	return 0;
}
