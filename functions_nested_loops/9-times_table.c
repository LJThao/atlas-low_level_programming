#include "main.h"

/**
 * void times_table - prints the 9 times table
 */

void times_table(void)

{

	int i, j, sum, sum1, sum2;

	for (i = 0; i < 10; i++)

	{

		printf("0,");

		for (j = 1; j < 10; j++)

		{

			sum = (i * j);

			sum1 = (sum / 10);

			sum2 = (sum % 10);

			if (sum1 == 0)

			{

				putchar(' ');

				putchar(' ');

				putchar(sum2 + '0');

			}

			else

			{

				putchar(' ');

				putchar(sum1 + '0');

				putchar(sum2 + '0');

			}

			if (j != 9)

			{

				putchar(',');

			}

		}

		putchar('\n');

	}

}
