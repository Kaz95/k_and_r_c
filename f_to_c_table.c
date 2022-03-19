#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */


void print_horizontal_heading()
{
	for (int count = 0; count <= 10; count++)
		printf("-");
	printf("\n");
}

int main()
{
	int fahr, celsius;
	int lower, upper, step;

	print_horizontal_heading();
	puts("Header");
	print_horizontal_heading();

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}

