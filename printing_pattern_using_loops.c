#include <stdio.h>

int main ()
{
	int n = 0, i = 0, j = 0, i_copy = 0;
	scanf("%d", &n); //Number of consecutive circles
	int edge = n + n - 1;
	int center = n;
    /* First half*/
	for (i = 0; i < center; i++) // Lines
	{
		for (j = 0; j < edge; j++) // Columns
		{
            while (i_copy != i && i_copy < center) // Lowers n depending on the current line (i)
            {
                printf("%d ", n);
                n--;
                j++;
                i_copy++;
            }
            if (i_copy == edge - j) // Edge
            {
                while (j < edge)
                {
                    n++;
                    printf("%d ", n);
                    j++;
                }
            }
            else
            printf("%d ", n);
		}
		printf("\n"); // Changes line
        i_copy = 0; // Resets
	}
    /* Second half */
	for (i = center - 1; i > 0; i--) // Lines
	{
		for (j = 0; j < edge; j++) // Columns
		{
            while (i_copy != i - 1 && i_copy >= 0) // Lowers n depending on the current line (i)
            {
                printf("%d ", n);
                n--;
                j++;
                i_copy++;
            }
            if (i_copy == edge - j) // Edge
            {
                while (j < edge)
                {
                    n++;
                    printf("%d ", n);
                    j++;
                }
            }
            else
            printf("%d ", n);
		}
		printf("\n"); // Changes line
        i_copy = 0; // Resets
	}
	return 0;
}
