#include <stdio.h>

int main() {
    int i, j, k;

    for (i = 0; i <= 7; i++) {
        for (j = i + 1; j <= 8; j++) {
            for (k = j + 1; k <= 9; k++) {
                putchar(i + '0');
                putchar(j + '0');
                putchar(k + '0');
                if (i < 7 || j < 8 || k < 9) {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

<<<<<<< HEAD
	for (i = 0; i <= 8; i++)
	{
		while (
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			/**putchar(',');
			 * putchar(' ');*/
			}
		      )
			putchar(' '),putchar(',');
	}

	return (0);
=======
    return 0;
>>>>>>> 60f4b794add92a23d7a42bb0ce935da47942ef07
}
