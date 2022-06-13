#include <stdio.h>
int main()
{
	int q = 0, w = 0, e = 0, r = 0;
	for (q = 100; q < 1000; q++)
	{
		for (w = 2; w < q; w++)
		{
			if (!(q % w))
			{
				break;
			}

		}
		if (!(q - w))
		{
			r++;
		}
	}
	printf("%d\n", r);
	return 0;
}